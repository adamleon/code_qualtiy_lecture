# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/adamleon/code_quality/code_quality_skilled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adamleon/code_quality/code_quality_skilled

# Include any dependencies generated for this target.
include CMakeFiles/code_quality_skilled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/code_quality_skilled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code_quality_skilled.dir/flags.make

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o: CMakeFiles/code_quality_skilled.dir/flags.make
CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o: code_quality_skilled.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/adamleon/code_quality/code_quality_skilled/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o -c /home/adamleon/code_quality/code_quality_skilled/code_quality_skilled.cpp

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/adamleon/code_quality/code_quality_skilled/code_quality_skilled.cpp > CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.i

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/adamleon/code_quality/code_quality_skilled/code_quality_skilled.cpp -o CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.s

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.requires:
.PHONY : CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.requires

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.provides: CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.requires
	$(MAKE) -f CMakeFiles/code_quality_skilled.dir/build.make CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.provides.build
.PHONY : CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.provides

CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.provides.build: CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o

# Object files for target code_quality_skilled
code_quality_skilled_OBJECTS = \
"CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o"

# External object files for target code_quality_skilled
code_quality_skilled_EXTERNAL_OBJECTS =

code_quality_skilled: CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o
code_quality_skilled: CMakeFiles/code_quality_skilled.dir/build.make
code_quality_skilled: CMakeFiles/code_quality_skilled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable code_quality_skilled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/code_quality_skilled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code_quality_skilled.dir/build: code_quality_skilled
.PHONY : CMakeFiles/code_quality_skilled.dir/build

CMakeFiles/code_quality_skilled.dir/requires: CMakeFiles/code_quality_skilled.dir/code_quality_skilled.cpp.o.requires
.PHONY : CMakeFiles/code_quality_skilled.dir/requires

CMakeFiles/code_quality_skilled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/code_quality_skilled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/code_quality_skilled.dir/clean

CMakeFiles/code_quality_skilled.dir/depend:
	cd /home/adamleon/code_quality/code_quality_skilled && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adamleon/code_quality/code_quality_skilled /home/adamleon/code_quality/code_quality_skilled /home/adamleon/code_quality/code_quality_skilled /home/adamleon/code_quality/code_quality_skilled /home/adamleon/code_quality/code_quality_skilled/CMakeFiles/code_quality_skilled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/code_quality_skilled.dir/depend
