# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sogent/CLionProjects/ClassInheritancePractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassInheritancePractice.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ClassInheritancePractice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassInheritancePractice.dir/flags.make

CMakeFiles/ClassInheritancePractice.dir/main.cpp.o: CMakeFiles/ClassInheritancePractice.dir/flags.make
CMakeFiles/ClassInheritancePractice.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassInheritancePractice.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassInheritancePractice.dir/main.cpp.o -c /Users/sogent/CLionProjects/ClassInheritancePractice/main.cpp

CMakeFiles/ClassInheritancePractice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassInheritancePractice.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sogent/CLionProjects/ClassInheritancePractice/main.cpp > CMakeFiles/ClassInheritancePractice.dir/main.cpp.i

CMakeFiles/ClassInheritancePractice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassInheritancePractice.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sogent/CLionProjects/ClassInheritancePractice/main.cpp -o CMakeFiles/ClassInheritancePractice.dir/main.cpp.s

CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o: CMakeFiles/ClassInheritancePractice.dir/flags.make
CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o: ../GenericInventoryItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o -c /Users/sogent/CLionProjects/ClassInheritancePractice/GenericInventoryItem.cpp

CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sogent/CLionProjects/ClassInheritancePractice/GenericInventoryItem.cpp > CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.i

CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sogent/CLionProjects/ClassInheritancePractice/GenericInventoryItem.cpp -o CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.s

# Object files for target ClassInheritancePractice
ClassInheritancePractice_OBJECTS = \
"CMakeFiles/ClassInheritancePractice.dir/main.cpp.o" \
"CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o"

# External object files for target ClassInheritancePractice
ClassInheritancePractice_EXTERNAL_OBJECTS =

ClassInheritancePractice: CMakeFiles/ClassInheritancePractice.dir/main.cpp.o
ClassInheritancePractice: CMakeFiles/ClassInheritancePractice.dir/GenericInventoryItem.cpp.o
ClassInheritancePractice: CMakeFiles/ClassInheritancePractice.dir/build.make
ClassInheritancePractice: CMakeFiles/ClassInheritancePractice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ClassInheritancePractice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassInheritancePractice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassInheritancePractice.dir/build: ClassInheritancePractice
.PHONY : CMakeFiles/ClassInheritancePractice.dir/build

CMakeFiles/ClassInheritancePractice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassInheritancePractice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassInheritancePractice.dir/clean

CMakeFiles/ClassInheritancePractice.dir/depend:
	cd /Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sogent/CLionProjects/ClassInheritancePractice /Users/sogent/CLionProjects/ClassInheritancePractice /Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug /Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug /Users/sogent/CLionProjects/ClassInheritancePractice/cmake-build-debug/CMakeFiles/ClassInheritancePractice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassInheritancePractice.dir/depend

