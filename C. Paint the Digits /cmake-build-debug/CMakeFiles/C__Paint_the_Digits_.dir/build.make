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
CMAKE_SOURCE_DIR = "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C__Paint_the_Digits_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C__Paint_the_Digits_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C__Paint_the_Digits_.dir/flags.make

CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o: CMakeFiles/C__Paint_the_Digits_.dir/flags.make
CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o -c "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /main.cpp"

CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /main.cpp" > CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.i

CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /main.cpp" -o CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.s

# Object files for target C__Paint_the_Digits_
C__Paint_the_Digits__OBJECTS = \
"CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o"

# External object files for target C__Paint_the_Digits_
C__Paint_the_Digits__EXTERNAL_OBJECTS =

C__Paint_the_Digits_: CMakeFiles/C__Paint_the_Digits_.dir/main.cpp.o
C__Paint_the_Digits_: CMakeFiles/C__Paint_the_Digits_.dir/build.make
C__Paint_the_Digits_: CMakeFiles/C__Paint_the_Digits_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C__Paint_the_Digits_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C__Paint_the_Digits_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C__Paint_the_Digits_.dir/build: C__Paint_the_Digits_

.PHONY : CMakeFiles/C__Paint_the_Digits_.dir/build

CMakeFiles/C__Paint_the_Digits_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C__Paint_the_Digits_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C__Paint_the_Digits_.dir/clean

CMakeFiles/C__Paint_the_Digits_.dir/depend:
	cd "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits " "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits " "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug" "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug" "/Users/kamolkumarpaul/Documents/workplace/C. Paint the Digits /cmake-build-debug/CMakeFiles/C__Paint_the_Digits_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C__Paint_the_Digits_.dir/depend
