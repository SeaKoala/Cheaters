# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\aknk0\Documents\College\312\Cheaters

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cheaters.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cheaters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cheaters.dir/flags.make

CMakeFiles/Cheaters.dir/main.cpp.obj: CMakeFiles/Cheaters.dir/flags.make
CMakeFiles/Cheaters.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cheaters.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Cheaters.dir\main.cpp.obj -c C:\Users\aknk0\Documents\College\312\Cheaters\main.cpp

CMakeFiles/Cheaters.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cheaters.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\aknk0\Documents\College\312\Cheaters\main.cpp > CMakeFiles\Cheaters.dir\main.cpp.i

CMakeFiles/Cheaters.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cheaters.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\aknk0\Documents\College\312\Cheaters\main.cpp -o CMakeFiles\Cheaters.dir\main.cpp.s

# Object files for target Cheaters
Cheaters_OBJECTS = \
"CMakeFiles/Cheaters.dir/main.cpp.obj"

# External object files for target Cheaters
Cheaters_EXTERNAL_OBJECTS =

Cheaters.exe: CMakeFiles/Cheaters.dir/main.cpp.obj
Cheaters.exe: CMakeFiles/Cheaters.dir/build.make
Cheaters.exe: CMakeFiles/Cheaters.dir/linklibs.rsp
Cheaters.exe: CMakeFiles/Cheaters.dir/objects1.rsp
Cheaters.exe: CMakeFiles/Cheaters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cheaters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Cheaters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cheaters.dir/build: Cheaters.exe

.PHONY : CMakeFiles/Cheaters.dir/build

CMakeFiles/Cheaters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Cheaters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Cheaters.dir/clean

CMakeFiles/Cheaters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\aknk0\Documents\College\312\Cheaters C:\Users\aknk0\Documents\College\312\Cheaters C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug C:\Users\aknk0\Documents\College\312\Cheaters\cmake-build-debug\CMakeFiles\Cheaters.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cheaters.dir/depend
