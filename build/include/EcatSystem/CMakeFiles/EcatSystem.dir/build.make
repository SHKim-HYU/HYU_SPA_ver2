# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/robot_ws/RTIndy7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/robot_ws/RTIndy7/build

# Include any dependencies generated for this target.
include include/EcatSystem/CMakeFiles/EcatSystem.dir/depend.make

# Include the progress variables for this target.
include include/EcatSystem/CMakeFiles/EcatSystem.dir/progress.make

# Include the compile flags for this target's objects.
include include/EcatSystem/CMakeFiles/EcatSystem.dir/flags.make

include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o: include/EcatSystem/CMakeFiles/EcatSystem.dir/flags.make
include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o: ../include/EcatSystem/Ecat_Master.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/robot_ws/RTIndy7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o -c /home/robot/robot_ws/RTIndy7/include/EcatSystem/Ecat_Master.cpp

include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.i"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robot/robot_ws/RTIndy7/include/EcatSystem/Ecat_Master.cpp > CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.i

include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.s"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robot/robot_ws/RTIndy7/include/EcatSystem/Ecat_Master.cpp -o CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.s

include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.o: include/EcatSystem/CMakeFiles/EcatSystem.dir/flags.make
include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.o: ../include/EcatSystem/PDOConfig.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/robot_ws/RTIndy7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.o"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/EcatSystem.dir/PDOConfig.c.o   -c /home/robot/robot_ws/RTIndy7/include/EcatSystem/PDOConfig.c

include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EcatSystem.dir/PDOConfig.c.i"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/robot/robot_ws/RTIndy7/include/EcatSystem/PDOConfig.c > CMakeFiles/EcatSystem.dir/PDOConfig.c.i

include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EcatSystem.dir/PDOConfig.c.s"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/robot/robot_ws/RTIndy7/include/EcatSystem/PDOConfig.c -o CMakeFiles/EcatSystem.dir/PDOConfig.c.s

# Object files for target EcatSystem
EcatSystem_OBJECTS = \
"CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o" \
"CMakeFiles/EcatSystem.dir/PDOConfig.c.o"

# External object files for target EcatSystem
EcatSystem_EXTERNAL_OBJECTS =

include/EcatSystem/libEcatSystemd.a: include/EcatSystem/CMakeFiles/EcatSystem.dir/Ecat_Master.cpp.o
include/EcatSystem/libEcatSystemd.a: include/EcatSystem/CMakeFiles/EcatSystem.dir/PDOConfig.c.o
include/EcatSystem/libEcatSystemd.a: include/EcatSystem/CMakeFiles/EcatSystem.dir/build.make
include/EcatSystem/libEcatSystemd.a: include/EcatSystem/CMakeFiles/EcatSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/robot_ws/RTIndy7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libEcatSystemd.a"
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && $(CMAKE_COMMAND) -P CMakeFiles/EcatSystem.dir/cmake_clean_target.cmake
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EcatSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/EcatSystem/CMakeFiles/EcatSystem.dir/build: include/EcatSystem/libEcatSystemd.a

.PHONY : include/EcatSystem/CMakeFiles/EcatSystem.dir/build

include/EcatSystem/CMakeFiles/EcatSystem.dir/clean:
	cd /home/robot/robot_ws/RTIndy7/build/include/EcatSystem && $(CMAKE_COMMAND) -P CMakeFiles/EcatSystem.dir/cmake_clean.cmake
.PHONY : include/EcatSystem/CMakeFiles/EcatSystem.dir/clean

include/EcatSystem/CMakeFiles/EcatSystem.dir/depend:
	cd /home/robot/robot_ws/RTIndy7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/robot_ws/RTIndy7 /home/robot/robot_ws/RTIndy7/include/EcatSystem /home/robot/robot_ws/RTIndy7/build /home/robot/robot_ws/RTIndy7/build/include/EcatSystem /home/robot/robot_ws/RTIndy7/build/include/EcatSystem/CMakeFiles/EcatSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/EcatSystem/CMakeFiles/EcatSystem.dir/depend

