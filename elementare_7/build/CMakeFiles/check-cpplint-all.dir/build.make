# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/yuri/Documents/ProtocellSimulator/elementare_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuri/Documents/ProtocellSimulator/elementare_7/build

# Utility rule file for check-cpplint-all.

# Include the progress variables for this target.
include CMakeFiles/check-cpplint-all.dir/progress.make

CMakeFiles/check-cpplint-all:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/yuri/Documents/ProtocellSimulator/elementare_7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run cpplint on selected files. Fails if errors are found."
	cd /home/yuri/Documents/ProtocellSimulator/elementare_7 && /home/yuri/biodynamo/build/share/cmake/../util/run-cpplint.sh `/home/yuri/biodynamo/build/share/cmake/../util/get-all-src-files.sh /home/yuri/Documents/ProtocellSimulator/elementare_7`

check-cpplint-all: CMakeFiles/check-cpplint-all
check-cpplint-all: CMakeFiles/check-cpplint-all.dir/build.make

.PHONY : check-cpplint-all

# Rule to build all files generated by this target.
CMakeFiles/check-cpplint-all.dir/build: check-cpplint-all

.PHONY : CMakeFiles/check-cpplint-all.dir/build

CMakeFiles/check-cpplint-all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check-cpplint-all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check-cpplint-all.dir/clean

CMakeFiles/check-cpplint-all.dir/depend:
	cd /home/yuri/Documents/ProtocellSimulator/elementare_7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuri/Documents/ProtocellSimulator/elementare_7 /home/yuri/Documents/ProtocellSimulator/elementare_7 /home/yuri/Documents/ProtocellSimulator/elementare_7/build /home/yuri/Documents/ProtocellSimulator/elementare_7/build /home/yuri/Documents/ProtocellSimulator/elementare_7/build/CMakeFiles/check-cpplint-all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check-cpplint-all.dir/depend

