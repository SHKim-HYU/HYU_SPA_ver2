
// Automatically generated realtime application source file for STEP platforms
//
// This file is part of NRMKPlatform SDK, Windows-based development tool and SDK
// for Real-time Linux Embedded EtherCAT master controller (STEP).
//
// Copyright (C) 2013-2015 Neuromeka <http://www.neuromeka.com>

//-system-/////////////////////////////////////////////////////////////////
#ifndef __XENO__
#define __XENO__
#endif
#include "RTIndy7Client.h"
#include "MR_Indy7.h"

#define USE_DC_MODE

JointInfo info;

MR_Indy7 mr_indy7;

// Xenomai RT tasks
RT_TASK RTIndy7_task;
RT_TASK print_task;
RT_TASK plot_task;


double ECAT_ActualPos_zero[NUM_AXIS] = {ZERO_POS_1, ZERO_POS_2,ZERO_POS_3, ZERO_POS_4, ZERO_POS_5, ZERO_POS_6};
double ActualPos_Rad[NUM_AXIS] = {0.0,};
double ActualVel_Rad[NUM_AXIS] = {0.0,};
double ActualVel_Rad_Old[NUM_AXIS] = {0.0,};
double ActualAcc_Rad[NUM_AXIS] = {0.0,};
double TargetPos_Rad[NUM_AXIS] = {0.0,};
double TargetVel_Rad[NUM_AXIS] = {0.0,};
double TargetAcc_Rad[NUM_AXIS] = {0.0,};
double ECAT_calcTorq[NUM_AXIS] = {0.0,};
double ECAT_TargetToq[NUM_AXIS] = {0.0,};
INT32   MotorDir[NUM_AXIS] = {1,1,1,1,1,1};
int   old_flag[NUM_AXIS]={0,};

int limit_flag=0;

//For Trajectory management
//Task

double traq[NUM_AXIS]={0.0, 0.0, 0.0, 0, 0.0, 0.0};
double traq_d[NUM_AXIS]={0.0,};
double traq_dd[NUM_AXIS]={0.0,};
int flag=0;
int rtsercan_fd  = -1;


void signal_handler(int signum);

int initAxes()
{
	for (int i = 0; i < NUM_AXIS; i++)
	{	
		Axis[i].setGearRatio(gearRatio[i]);
		Axis[i].setGearEfficiency(EFFICIENCY);
		Axis[i].setPulsePerRevolution(ENC_CORE);
		Axis[i].setTauADC(TauADC[i]);
		Axis[i].setTauK(TauK[i]);
		Axis[i].setZeroPos(zeroPos[i]);

		Axis[i].setDirQ(-1);
		Axis[i].setDirTau(-1);

		Axis[i].setConversionConstants();
		
		Axis[i].setTarVelInCnt(0);
		Axis[i].setTarTorInCnt(0);
		
		nrmk_master.setServoOn(i);
	}
	
	return 1;
}
void saveLogData(){}
/****************************************************************************/
void Robot_Limit()
{
	for(int i=0;i<NUM_AXIS;i++)
	{
		if(abs(ActualVel_Rad[i])>4)
		{
			traq_d[i]=0;
			traq_dd[i]=0;
			limit_flag=1;
		}
	}
}
// int isDriveInit(void)
// {
// 	int elmo_count = 0;
// 	for(int i=0; i<NUM_AXIS; ++i)
// 	{
// 		if(ecat_nrmk_drive[i].initialized())
// 			elmo_count++;
// 	}

// 	// for(int i=0;i<NUM_AXIS;i++)
// 	// {
// 	// 	ecat_nrmk_drive[i].mode_of_operation_ = ecat_nrmk_drive[i].MODE_CYCLIC_SYNC_TORQUE;
// 	// }
// 	if(elmo_count == NUM_AXIS)

// 		return 1;
// 	else
// 		return 0;
// }

int compute()
{

	return 0;
}
void readEcatData(){
	nrmk_master.readBuffer(0x60410, StatusWord);
	nrmk_master.readBuffer(0x60640, ActualPos);
	nrmk_master.readBuffer(0x606c0, ActualVel);
	nrmk_master.readBuffer(0x60770, ActualTor);
	nrmk_master.readBuffer(0x60610, ModeOfOperationDisplay);
	nrmk_master.readBuffer(0x61001, StatusCode);
	nrmk_master.readBuffer(0x61002, DI5V);
	nrmk_master.readBuffer(0x61003, DI1);
	nrmk_master.readBuffer(0x61004, DI2);
	nrmk_master.readBuffer(0x61005, AI1);
	nrmk_master.readBuffer(0x61006, AI2);
	nrmk_master.readBuffer(0x61007, FTRawFxCB);
	nrmk_master.readBuffer(0x61008, FTRawFyCB);
	nrmk_master.readBuffer(0x61009, FTRawFzCB);
	nrmk_master.readBuffer(0x610010, FTRawTxCB);
	nrmk_master.readBuffer(0x610011, FTRawTyCB);
	nrmk_master.readBuffer(0x610012, FTRawTzCB);
	nrmk_master.readBuffer(0x610013, FTOverloadStatusCB);
	nrmk_master.readBuffer(0x610014, FTErrorFlagCB);
	nrmk_master.readBuffer(0x610015, RS485RxCnt);
	nrmk_master.readBuffer(0x610016, RS485RxD0);
	nrmk_master.readBuffer(0x610017, RS485RxD1);
	nrmk_master.readBuffer(0x610018, RS485RxD2);
	nrmk_master.readBuffer(0x610019, RS485RxD3);
	nrmk_master.readBuffer(0x610020, RS485RxD4);
	nrmk_master.readBuffer(0x610021, RS485RxD5);
	nrmk_master.readBuffer(0x610022, RS485RxD6);
	nrmk_master.readBuffer(0x610023, RS485RxD7);
	nrmk_master.readBuffer(0x610024, RS485RxD8);
	nrmk_master.readBuffer(0x610025, RS485RxD9);
	nrmk_master.readBuffer(0x60001, IStatus);
	nrmk_master.readBuffer(0x60002, IButton);
	nrmk_master.readBuffer(0x60003, FTRawFx);
	nrmk_master.readBuffer(0x60004, FTRawFy);
	nrmk_master.readBuffer(0x60005, FTRawFz);
	nrmk_master.readBuffer(0x60006, FTRawTx);
	nrmk_master.readBuffer(0x60007, FTRawTy);
	nrmk_master.readBuffer(0x60008, FTRawTz);
	nrmk_master.readBuffer(0x60009, FTOverloadStatus);
	nrmk_master.readBuffer(0x600010, FTErrorFlag);	
	
	for(int i=0; i<NUM_AXIS;i++)
	{
		Axis[i].setCurrentPosInCnt(ActualPos[i]);
		Axis[i].setCurrentVelInCnt(ActualVel[i]);
		Axis[i].setCurrentTorInCnt(ActualTor[i]);
		Axis[i].setDataIn(DataIn[i]);
		
		Axis[i].setCurrentTime(gt);
	}
}

// RTIndy7_task
void RTIndy7_run(void *arg)
{
	RTIME now, previous;

	// Synchronize EtherCAT Master (for Distributed Clock Mode)
	nrmk_master.syncEcatMaster();

	/* Arguments: &task (NULL=self),
	 *            start time,
	 *            period
	 */
	rt_task_set_periodic(NULL, TM_NOW, cycle_ns);

	info.des.q = JVec::Zero();
	info.des.dq = JVec::Zero();
	info.des.ddq = JVec::Zero();
	JVec eint = JVec::Zero();
	JVec e = JVec::Zero();
	JVec q0 = JVec::Zero();
	JVec qT = JVec::Zero();
	//qT<< 0.1,0.1,-1.5708,0.1,-1.5708,0.1;
	qT<< 0.1,0.1,-1.5707,0.1,0.1,0.1;
	double Tf = 5;
	int method =5;

	while (run)
	{
		previous = rt_timer_read();
		// [ToDo] Here is an error for PDO mapping		
		nrmk_master.processTxDomain();
		readEcatData();
		if(system_ready)
		{
			/// TO DO: read data from sensors in EtherCAT system interface
			


			
			if(traj_flag ==0){
				q0 = info.act.q;
				traj_flag =1;
			}
			if(traj_flag == 1){
				if (gt <=Tf){
					JointTrajectory(q0, qT, Tf, gt , method , info.des.q, info.des.dq, info.des.ddq) ;
				}else if(gt > Tf){
					q0 = info.act.q;
					qT = JVec::Zero();
					traj_flag =2;
				}
				
			}
			if(traj_flag ==2){
				JointTrajectory(q0, qT, Tf, gt-Tf , method , info.des.q, info.des.dq, info.des.ddq) ;
			}
			
			compute();
			Robot_Limit();
			//JVec clacTorq = mr_indy7.Gravity( info.act.q ); // calcTorque
			//JVec clacTorq = mr_indy7.ComputedTorqueControl( info.act.q , info.act.dq, info.des.q, info.des.dq); // calcTorque
			e = info.des.q-info.act.q;
			eint = eint+e*0.001;
			JVec clacTorq = mr_indy7.HinfControl( info.act.q , info.act.dq, info.des.q, info.des.dq,info.des.ddq,eint);
			mr_indy7.saturationMaxTorque(clacTorq,MAX_TORQUES);

			/// TO DO: write data to actuators in EtherCAT system interface
			// nrmk_master.writeBuffer(0x60710, TargetTor);
			// nrmk_master.writeBuffer(0x60600, ModeOfOperation);
			
		}
		nrmk_master.processRxDomain();

		

		if (system_ready)
			//saveLogData();
			
		// For EtherCAT performance statistics
		now = rt_timer_read();
		ethercat_time = (long) now - previous;

		if (nrmk_master.isSystemReady())
		{
			rt_printf("system is ready\n");
			system_ready=1;	//all drives have been done

			gt+= period;
			
			if (worst_time<ethercat_time) worst_time=ethercat_time;
			if(ethercat_time > max_time)
				++fault_count;
		}
		rt_task_wait_period(NULL); 	//wait for next cycle
	}
}

// Console cycle
// Note: You have to use rt_printf in Xenomai RT tasks
void print_run(void *arg)
{
	RTIME now, previous=0;
	int i;
	unsigned long itime=0, step;
	long stick=0;
	int count=0;
	unsigned int NumSlaves=0, masterState=0, slaveState=0;
	
	rt_printf("\e[31;1m \nPlease WAIT at least %i (s) until the system getting ready...\e[0m\n", WAKEUP_TIME);
	
	/* Arguments: &task (NULL=self),
	 *            start time,
	 *            period (here: 100ms = 0.1s)
	 */
	rt_task_set_periodic(NULL, TM_NOW, cycle_ns);
	
	while (1)
	{
		if (++count==1000)
		{
			++stick;
			count=0;
		}
		if (system_ready)
		{
			now = rt_timer_read();
			step=(unsigned long)(now - previous) / 1000000;
			itime+=step;
			previous=now;
			rt_printf("Time=%0.3lf s \n", gt);
			rt_printf("ethercat_dt= %lius, worst_dt= %lins, fault=%d\n", ethercat_time/1000, worst_time, fault_count);

			if (nrmk_master.getMasterStatus(NumSlaves, masterState))
				rt_printf("Master: Online - State %i - %i slave(s)\n", masterState, NumSlaves);
			else
				rt_printf("Master: Offline\n");

			if (nrmk_master.getRxDomainStatus())
				rt_printf("RxDomain: Online\n");
			else
				rt_printf("RxDomain: Offline\n");

			if (nrmk_master.getTxDomainStatus())
				rt_printf("TxDomain: Online\n");
			else
				rt_printf("TxDomain: Offline\n");

			// for(int j=0; j<NUM_AXIS; ++j){
			// 	//rt_printf("ID: %d", j+NUM_FT);
			// 	//rt_printf("\t CtrlWord: 0x%04X, ",		ControlWord[j]);
			// 	//rt_printf("\t StatWord: 0x%04X, \n",	StatusWord[j]);
			//     //rt_printf("\t DeviceState: %d, ",		DeviceState[j]);
			// 	//rt_printf("\t ModeOfOp: %d,	\n",		ModeOfOperationDisplay[j]);
			// 	//rt_printf("\t ecat_ActPos : %d",ecat_nrmk_drive[j].position_);
			// 	//rt_printf("\t ecat_ActPosZero : %f",ECAT_ActualPos_zero[j]);
			// 	rt_printf("\t ActPos: %lf, ActVel :%lf \n",ActualPos_Rad[j], ActualVel_Rad[j]);
			// 	rt_printf("\t DesPos: %lf, DesVel :%lf, DesAcc :%lf\n",info.des.q[j],info.des.dq[j],info.des.ddq[j]);
			// 	rt_printf("\t e: %lf, edot :%lf",info.des.q[j]-info.act.q[j],info.des.dq[j]-info.act.dq[j]);
			// 	rt_printf("\t TarTor: %f, ",				ECAT_calcTorq[j]);
			// 	rt_printf("\t ActTor: %d,\n",			ECAT_ActualTor[j]);
			// }
			rt_printf("\n");
		}
		else
		{
			if (count==0){
				rt_printf("%i", stick);
				for(i=0; i<stick; ++i)
					rt_printf(".");
				rt_printf("\n");
			}
		}

		rt_task_wait_period(NULL); //wait for next cycle
	}
}


/****************************************************************************/
void signal_handler(int signum)
{
	rt_task_delete(&plot_task);
	rt_task_delete(&RTIndy7_task);
	rt_task_delete(&print_task);
	printf("\n\n");
	if(signum==SIGINT)
		printf("╔════════════════[SIGNAL INPUT SIGINT]═══════════════╗\n");
	else if(signum==SIGTERM)
		printf("╔═══════════════[SIGNAL INPUT SIGTERM]═══════════════╗\n");	
	else if(signum==SIGWINCH)
		printf("╔═══════════════[SIGNAL INPUT SIGWINCH]══════════════╗\n");		
	else if(signum==SIGHUP)
		printf("╔════════════════[SIGNAL INPUT SIGHUP]═══════════════╗\n");
    printf("║                Servo drives Stopped!               ║\n");
	printf("╚════════════════════════════════════════════════════╝\n");	
    
    nrmk_master.deinit();
    exit(1);
}


/****************************************************************************/
int main(int argc, char **argv)
{
	// Perform auto-init of rt_print buffers if the task doesn't do so
    rt_print_auto_init(1);

	signal(SIGINT, signal_handler);
	signal(SIGTERM, signal_handler);
	signal(SIGWINCH, signal_handler);
	signal(SIGHUP, signal_handler);

	/* Avoids memory swapping for this program */
	mlockall(MCL_CURRENT|MCL_FUTURE);

	// TO DO: Specify the cycle period (cycle_ns) here, or use default value
	cycle_ns = 1000000; // nanosecond -> 1kHz
	period=((double) cycle_ns)/((double) NSEC_PER_SEC);	//period in second unit

	mr_indy7=MR_Indy7();
	mr_indy7.MRSetup();
	MAX_TORQUES<<MAX_TORQUE_1,MAX_TORQUE_2,MAX_TORQUE_3,MAX_TORQUE_4,MAX_TORQUE_5,MAX_TORQUE_6;

	// For CST (cyclic synchronous torque) control
	if (nrmk_master.init(OP_MODE_CYCLIC_SYNC_TORQUE, cycle_ns) == -1)
	{
		printf("System Initialization Failed\n");
	    return 0;
	}
	for (int i = 0; i < NUM_AXIS; ++i)
		ModeOfOperation[i] = OP_MODE_CYCLIC_SYNC_TORQUE;

	// For trajectory interpolation
	initAxes();

	// TO DO: Create data socket server
	datasocket.setPeriod(period);

	if (datasocket.startServer(SOCK_TCP, NRMK_PORT_DATA))
		printf("Data server started at IP of : %s on Port: %d\n", datasocket.getAddress(), NRMK_PORT_DATA);

	printf("Waiting for Data Scope to connect...\n");
	datasocket.waitForConnection(0);
	

	// RTIndy7_task: create and start
	printf("Now running rt task ...\n");
	rt_printf(" sercan_dev_open = %d\n", rtsercan_fd);

	rt_task_create(&RTIndy7_task, "RTIndy7_task", 0, 99, 0);
	rt_task_start(&RTIndy7_task, &RTIndy7_run, NULL);

	// printing: create and start
	rt_task_create(&print_task, "printing", 0, 70, 0);
	rt_task_start(&print_task, &print_run, NULL);
	

	// Must pause here
	pause();
	/*
	while (1)
	{
		usleep(1e5);
	}
	*/
	// Finalize
	signal_handler(0);

    return 0;
}



