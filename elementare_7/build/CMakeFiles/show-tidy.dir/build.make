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

# Utility rule file for show-tidy.

# Include the progress variables for this target.
include CMakeFiles/show-tidy.dir/progress.make

CMakeFiles/show-tidy:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/yuri/Documents/ProtocellSimulator/elementare_7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-tidy on selected files and display errors."
	cd /home/yuri/Documents/ProtocellSimulator/elementare_7 && /home/yuri/biodynamo/build/share/cmake/../util/run-clang-tidy.sh /usr/bin/clang-tidy-3.9 /home/yuri/Documents/ProtocellSimulator/elementare_7/build/clang_tidy_header_helper.cc /home/yuri/Documents/ProtocellSimulator/elementare_7/build/compile_commands.json 2 `/home/yuri/biodynamo/build/share/cmake/../util/get-changed-src-files-origin-master.sh /home/yuri/Documents/ProtocellSimulator/elementare_7 | grep -v -F -f /home/yuri/Documents/ProtocellSimulator/elementare_7/.clang-tidy-ignore`

show-tidy: CMakeFiles/show-tidy
show-tidy: CMakeFiles/show-tidy.dir/build.make

.PHONY : show-tidy

# Rule to build all files generated by this target.
CMakeFiles/show-tidy.dir/build: show-tidy

.PHONY : CMakeFiles/show-tidy.dir/build

CMakeFiles/show-tidy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/show-tidy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/show-tidy.dir/clean

CMakeFiles/show-tidy.dir/depend:
	cd /home/yuri/Documents/ProtocellSimulator/elementare_7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuri/Documents/ProtocellSimulator/elementare_7 /home/yuri/Documents/ProtocellSimulator/elementare_7 /home/yuri/Documents/ProtocellSimulator/elementare_7/build /home/yuri/Documents/ProtocellSimulator/elementare_7/build /home/yuri/Documents/ProtocellSimulator/elementare_7/build/CMakeFiles/show-tidy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/show-tidy.dir/depend

