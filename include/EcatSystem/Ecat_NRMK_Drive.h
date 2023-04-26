/*
 * Ecat_NRMK_Drive.h
 *
 *  Created on: 2018. 11. 15.
 *      Author: Administrator
 */

#ifndef ECATSYSTEM_ECAT_NRMK_Drive_H_
#define ECATSYSTEM_ECAT_NRMK_Drive_H_

#include "Ecat_Slave.h"
#include "PDOConfig.h"



namespace hyuEcat{

class EcatNRMK_Drive : public Slave
{
public:
public:
	EcatNRMK_Drive() : Slave(NRMK_Drive_VendorID, NRMK_Drive_ProductCode) {}
    virtual ~EcatNRMK_Drive() {}

    /** Returns true if NRMK_Drive has reached "operation enabled" state.
     *  The transition through the state machine is handled automatically. */
    bool initialized() const {return initialized_;}


    int NRMK_Drive_DeviceState(void) const {return state_;};

    /** Write the torque in Nm.
     *  User must first set max_torque_Nm_.
     *  Provided as a convenience to calculate target_torque_
     *  NOTE: function assumes [max_torque_ = 1000]  */
    void writeTorque(int16_t torque)
    {
 	   target_torque_ = torque;
    }



    /** Maximum torque in Nm,
     *  corresponding to the max current set in NRMK_Drive Motion Studio */
    double max_torque_Nm_ = 1800;


	virtual void processData(size_t index, uint8_t* domain_address) //read and write PDO and if index is 8,
	{                                                               //check the state and change the flag of state
		// DATA READ WRITE
		switch(index)
		{
		//RxPDO
		case 0:
            control_word_ = EC_READ_U16(domain_address);

            //initialization sequence
            control_word_ = transition(state_, control_word_);
            EC_WRITE_U16(domain_address, control_word_);
            break;
		case 1:
            EC_WRITE_S32(domain_address, target_position_);
            break;
		case 2:
            EC_WRITE_S32(domain_address, target_velocity_);
            break;
		case 3:
            EC_WRITE_S16(domain_address, target_torque_);
            break;
		case 4:
            EC_WRITE_S8(domain_address, mode_of_operation_);
            break;
		//TxPDO
		case 5:
            status_word_ = EC_READ_U16(domain_address);
            state_ = deviceState(status_word_);
            break;
		case 6:
            position_ = EC_READ_S32(domain_address);
            break;
		case 7:
			velocity_ = EC_READ_S32(domain_address);
            break;
		case 8:
            torque_ = EC_READ_S16(domain_address);
            break;			
		case 9:
            mode_of_operation_display_= EC_READ_S8(domain_address);
            break;
			
		default:
			std::cout << "WARNING. NRMK_Drive pdo index out of range." << std::endl;
		}

		// CHECK FOR STATE CHANGE
		if (index==5) //if last entry  in domain
		{
			if (status_word_ != last_status_word_){
				state_ = deviceState(status_word_);
				if (state_ != last_state_){
					#if 1
						std::cout << "NRMK_Drive_POS: " << slave_position << " " << ", NRMK_Drive_STATE: " << device_state_str_[state_] << std::endl;
					#endif
				}
			}
			if ((state_ == STATE_OPERATION_ENABLED) && (last_state_ == STATE_OPERATION_ENABLED)){
				initialized_ = true;
			}
			else {
				initialized_ = false;
			}
			last_status_word_ = status_word_;
			last_state_ = state_;
		}
    }

    virtual const ec_sync_info_t* syncs() { return &NRMK_Drive_syncs[0]; }

    virtual size_t syncSize() {
        return sizeof(NRMK_Drive_syncs)/sizeof(ec_sync_info_t);
    }

    virtual const ec_pdo_entry_info_t* channels() {
        return NRMK_Drive_pdo_entries;
    }

    virtual void domains(DomainMap& domains) const {
        domains = domains_;
    }


    uint16_t control_word_              = 0;        // write
    int32_t  target_position_           = 0; 		// write
    int32_t  target_velocity_           = 0; 		// write
    int16_t  target_torque_             = 0; 		// write (max torque (max current) = 1000)
    int8_t   mode_of_operation_         = 0; 		// write (use enum ModeOfOperation for convenience)

    uint16_t status_word_               = 0;        // read
    int32_t  position_                  = 0; 		// read
    int32_t  velocity_					= 0;		// read
    int16_t  torque_                    = 0; 		// read
    int8_t   mode_of_operation_display_ = 0; 		// read
    
    bool     digital_outputs_[6]        = {false}; // write
    bool     digital_inputs_[6]         = {false}; // read


    enum ModeOfOperation
    {
        MODE_NO_MODE                = 0,
        MODE_PROFILED_POSITION      = 1,
        MODE_PROFILED_VELOCITY      = 3,
        MODE_PROFILED_TORQUE        = 4,
        MODE_INTERPOLATED_POSITION  = 7,
        MODE_CYCLIC_SYNC_POSITION   = 8,
        MODE_CYCLIC_SYNC_VELEOCITY  = 9,
        MODE_CYCLIC_SYNC_TORQUE     = 10
    };

private:

    uint32_t digital_output_            = 0; // write
    uint32_t digital_input_             = 0; // read (must be enabled in NRMK_Drive Motion Studio)

    DomainMap domains_ = {
        //{0, {0,1,2,3,4,5,6,7,8,9}}
    	{0, {0,1,2,3,4,5,6,7,8,9}}
    };


//========================================================
// NRMK_Drive SPECIFIC
//========================================================

    enum DeviceState
    {
        STATE_UNDEFINED 					= 0,
        STATE_START 						= 1,
        STATE_NOT_READY_TO_SWITCH_ON		= 3,
        STATE_SWITCH_ON_DISABLED			= 4,
        STATE_READY_TO_SWITCH_ON			= 5,
        STATE_SWITCH_ON						= 6,
        STATE_OPERATION_ENABLED				= 7,
        STATE_QUICK_STOP_ACTIVE				= 8,
        STATE_FAULT_REACTION_ACTIVE			= 9,
        STATE_FAULT							= 10
    };

    std::map<DeviceState,std::string> device_state_str_ = {
         {STATE_START,                  	"Start"},
         {STATE_NOT_READY_TO_SWITCH_ON, 	"Not Ready to Switch On"},
         {STATE_SWITCH_ON_DISABLED,     	"Switch on Disabled"},
         {STATE_READY_TO_SWITCH_ON,     	"Ready to Switch On"},
         {STATE_SWITCH_ON,              	"Switch On"},
         {STATE_OPERATION_ENABLED,      	"Operation Enabled"},
         {STATE_QUICK_STOP_ACTIVE,      	"Quick Stop Active"},
         {STATE_FAULT_REACTION_ACTIVE,  	"Fault Reaction Active"},
         {STATE_FAULT,                  	"Fault"}
    };

    /** returns device state based upon the status_word */
    DeviceState deviceState(uint16_t status_word)
    {
        if      ((status_word & 0b01001111) == 0b00000000){
            return STATE_NOT_READY_TO_SWITCH_ON;
        }
        else if ((status_word & 0b01001111) == 0b01000000){
            return STATE_SWITCH_ON_DISABLED;
        }
        else if ((status_word & 0b01101111) == 0b00100001){
            return STATE_READY_TO_SWITCH_ON;
        }
        else if ((status_word & 0b01101111) == 0b00100011){
        	return STATE_SWITCH_ON;
        }
        else if ((status_word & 0b01101111) == 0b00100111){
    		return STATE_OPERATION_ENABLED;        	
        }
        else if ((status_word & 0b01101111) == 0b00000111){
            return STATE_QUICK_STOP_ACTIVE;
        }
        else if ((status_word & 0b01001111) == 0b00001111){
            return STATE_FAULT_REACTION_ACTIVE;
        }
        else if ((status_word & 0b01001111) == 0b00001000){
            return STATE_FAULT;
        }
        return STATE_UNDEFINED;
    }

    uint16_t transition(DeviceState state, uint16_t control_word)
    {
        switch(state)
        {
        case STATE_START:                   // -> STATE_NOT_READY_TO_SWITCH_ON (automatic)
            return control_word;
        case STATE_NOT_READY_TO_SWITCH_ON:  // -> STATE_SWITCH_ON_DISABLED (automatic)
        	return control_word;
        case STATE_SWITCH_ON_DISABLED:      // -> STATE_READY_TO_SWITCH_ON
            return ((control_word & 0b01111110) | 0b00000110);
        case STATE_READY_TO_SWITCH_ON:      // -> STATE_SWITCH_ON
            return ((control_word & 0b01110111) | 0b00000111);
        case STATE_SWITCH_ON:               // -> STATE_OPERATION_ENABLED
            return ((control_word & 0b01110000) | 0b00001111);
        case STATE_OPERATION_ENABLED:       // -> GOOD
        	return ((control_word & 0b00000000) | 0b00001111);
        case STATE_QUICK_STOP_ACTIVE:       // -> STATE_OPERATION_ENABLED
            return ((control_word & 0b01111111) | 0b00001111);
        case STATE_FAULT_REACTION_ACTIVE:   // -> STATE_FAULT (automatic)
            return control_word;
        case STATE_FAULT:                   // -> STATE_SWITCH_ON_DISABLED
            return ((control_word & 0b11111111) | 0b10000000);
        }
        return control_word;
    }

    int last_status_word_ = -1;
    DeviceState last_state_ = STATE_START;
    DeviceState state_ = STATE_START;

    bool initialized_ = false;



};

}


#endif /* ECATSYSTEM_ECAT_NRMK_Drive_H_ */
