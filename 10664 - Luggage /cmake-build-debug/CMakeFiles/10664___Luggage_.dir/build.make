# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/10664___Luggage_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10664___Luggage_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10664___Luggage_.dir/flags.make

CMakeFiles/10664___Luggage_.dir/main.cpp.o: CMakeFiles/10664___Luggage_.dir/flags.make
CMakeFiles/10664___Luggage_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10664___Luggage_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/10664___Luggage_.dir/main.cpp.o -c "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /main.cpp"

CMakeFiles/10664___Luggage_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10664___Luggage_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /main.cpp" > CMakeFiles/10664___Luggage_.dir/main.cpp.i

CMakeFiles/10664___Luggage_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10664___Luggage_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /main.cpp" -o CMakeFiles/10664___Luggage_.dir/main.cpp.s

# Object files for target 10664___Luggage_
10664___Luggage__OBJECTS = \
"CMakeFiles/10664___Luggage_.dir/main.cpp.o"

# External object files for target 10664___Luggage_
10664___Luggage__EXTERNAL_OBJECTS =

10664___Luggage_: CMakeFiles/10664___Luggage_.dir/main.cpp.o
10664___Luggage_: CMakeFiles/10664___Luggage_.dir/build.make
10664___Luggage_: CMakeFiles/10664___Luggage_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 10664___Luggage_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10664___Luggage_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10664___Luggage_.dir/build: 10664___Luggage_

.PHONY : CMakeFiles/10664___Luggage_.dir/build

CMakeFiles/10664___Luggage_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10664___Luggage_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10664___Luggage_.dir/clean

CMakeFiles/10664___Luggage_.dir/depend:
	cd "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage " "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage " "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug" "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug" "/Users/kamolkumarpaul/Documents/workplace/10664 - Luggage /cmake-build-debug/CMakeFiles/10664___Luggage_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/10664___Luggage_.dir/depend

