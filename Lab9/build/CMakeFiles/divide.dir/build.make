# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/jaret/jav76/Labs/Lab9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jaret/jav76/Labs/Lab9/build

# Include any dependencies generated for this target.
include CMakeFiles/divide.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/divide.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/divide.dir/flags.make

CMakeFiles/divide.dir/main.cpp.o: CMakeFiles/divide.dir/flags.make
CMakeFiles/divide.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jaret/jav76/Labs/Lab9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/divide.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/divide.dir/main.cpp.o -c /home/jaret/jav76/Labs/Lab9/main.cpp

CMakeFiles/divide.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/divide.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jaret/jav76/Labs/Lab9/main.cpp > CMakeFiles/divide.dir/main.cpp.i

CMakeFiles/divide.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/divide.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jaret/jav76/Labs/Lab9/main.cpp -o CMakeFiles/divide.dir/main.cpp.s

CMakeFiles/divide.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/divide.dir/main.cpp.o.requires

CMakeFiles/divide.dir/main.cpp.o.provides: CMakeFiles/divide.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/divide.dir/build.make CMakeFiles/divide.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/divide.dir/main.cpp.o.provides

CMakeFiles/divide.dir/main.cpp.o.provides.build: CMakeFiles/divide.dir/main.cpp.o


# Object files for target divide
divide_OBJECTS = \
"CMakeFiles/divide.dir/main.cpp.o"

# External object files for target divide
divide_EXTERNAL_OBJECTS =

divide: CMakeFiles/divide.dir/main.cpp.o
divide: CMakeFiles/divide.dir/build.make
divide: CMakeFiles/divide.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jaret/jav76/Labs/Lab9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable divide"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/divide.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/divide.dir/build: divide

.PHONY : CMakeFiles/divide.dir/build

CMakeFiles/divide.dir/requires: CMakeFiles/divide.dir/main.cpp.o.requires

.PHONY : CMakeFiles/divide.dir/requires

CMakeFiles/divide.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/divide.dir/cmake_clean.cmake
.PHONY : CMakeFiles/divide.dir/clean

CMakeFiles/divide.dir/depend:
	cd /home/jaret/jav76/Labs/Lab9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jaret/jav76/Labs/Lab9 /home/jaret/jav76/Labs/Lab9 /home/jaret/jav76/Labs/Lab9/build /home/jaret/jav76/Labs/Lab9/build /home/jaret/jav76/Labs/Lab9/build/CMakeFiles/divide.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/divide.dir/depend
