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
CMAKE_SOURCE_DIR = /home/xt/github/c-primer-Plus/cppclass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xt/github/c-primer-Plus/cppclass/build

# Include any dependencies generated for this target.
include src/CMakeFiles/find.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/find.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/find.dir/flags.make

src/CMakeFiles/find.dir/find.cpp.o: src/CMakeFiles/find.dir/flags.make
src/CMakeFiles/find.dir/find.cpp.o: ../src/find.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xt/github/c-primer-Plus/cppclass/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/find.dir/find.cpp.o"
	cd /home/xt/github/c-primer-Plus/cppclass/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/find.dir/find.cpp.o -c /home/xt/github/c-primer-Plus/cppclass/src/find.cpp

src/CMakeFiles/find.dir/find.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/find.dir/find.cpp.i"
	cd /home/xt/github/c-primer-Plus/cppclass/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xt/github/c-primer-Plus/cppclass/src/find.cpp > CMakeFiles/find.dir/find.cpp.i

src/CMakeFiles/find.dir/find.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/find.dir/find.cpp.s"
	cd /home/xt/github/c-primer-Plus/cppclass/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xt/github/c-primer-Plus/cppclass/src/find.cpp -o CMakeFiles/find.dir/find.cpp.s

# Object files for target find
find_OBJECTS = \
"CMakeFiles/find.dir/find.cpp.o"

# External object files for target find
find_EXTERNAL_OBJECTS =

src/find: src/CMakeFiles/find.dir/find.cpp.o
src/find: src/CMakeFiles/find.dir/build.make
src/find: src/CMakeFiles/find.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xt/github/c-primer-Plus/cppclass/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable find"
	cd /home/xt/github/c-primer-Plus/cppclass/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/find.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/find.dir/build: src/find

.PHONY : src/CMakeFiles/find.dir/build

src/CMakeFiles/find.dir/clean:
	cd /home/xt/github/c-primer-Plus/cppclass/build/src && $(CMAKE_COMMAND) -P CMakeFiles/find.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/find.dir/clean

src/CMakeFiles/find.dir/depend:
	cd /home/xt/github/c-primer-Plus/cppclass/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xt/github/c-primer-Plus/cppclass /home/xt/github/c-primer-Plus/cppclass/src /home/xt/github/c-primer-Plus/cppclass/build /home/xt/github/c-primer-Plus/cppclass/build/src /home/xt/github/c-primer-Plus/cppclass/build/src/CMakeFiles/find.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/find.dir/depend

