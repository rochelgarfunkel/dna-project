# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/124/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/124/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DNA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DNA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DNA.dir/flags.make

CMakeFiles/DNA.dir/manager.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/manager.cpp.o: ../manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DNA.dir/manager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/manager.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp

CMakeFiles/DNA.dir/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp > CMakeFiles/DNA.dir/manager.cpp.i

CMakeFiles/DNA.dir/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp -o CMakeFiles/DNA.dir/manager.cpp.s

# Object files for target DNA
DNA_OBJECTS = \
"CMakeFiles/DNA.dir/manager.cpp.o"

# External object files for target DNA
DNA_EXTERNAL_OBJECTS =

DNA: CMakeFiles/DNA.dir/manager.cpp.o
DNA: CMakeFiles/DNA.dir/build.make
DNA: CMakeFiles/DNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DNA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DNA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DNA.dir/build: DNA

.PHONY : CMakeFiles/DNA.dir/build

CMakeFiles/DNA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DNA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DNA.dir/clean

CMakeFiles/DNA.dir/depend:
	cd /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles/DNA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DNA.dir/depend
