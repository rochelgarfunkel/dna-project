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

CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o: ../helper_structures/helper_function.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/helper_function.cpp

CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/helper_function.cpp > CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.i

CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/helper_function.cpp -o CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.s

CMakeFiles/DNA.dir/manager.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/manager.cpp.o: ../manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DNA.dir/manager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/manager.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp

CMakeFiles/DNA.dir/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp > CMakeFiles/DNA.dir/manager.cpp.i

CMakeFiles/DNA.dir/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/manager.cpp -o CMakeFiles/DNA.dir/manager.cpp.s

CMakeFiles/DNA.dir/main.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DNA.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/main.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/main.cpp

CMakeFiles/DNA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/main.cpp > CMakeFiles/DNA.dir/main.cpp.i

CMakeFiles/DNA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/main.cpp -o CMakeFiles/DNA.dir/main.cpp.s

CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o: ../command_controller/command_collection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/command_collection.cpp

CMakeFiles/DNA.dir/command_controller/command_collection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/command_controller/command_collection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/command_collection.cpp > CMakeFiles/DNA.dir/command_controller/command_collection.cpp.i

CMakeFiles/DNA.dir/command_controller/command_collection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/command_controller/command_collection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/command_collection.cpp -o CMakeFiles/DNA.dir/command_controller/command_collection.cpp.s

CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o: ../command_controller/commands/load.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/load.cpp

CMakeFiles/DNA.dir/command_controller/commands/load.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/command_controller/commands/load.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/load.cpp > CMakeFiles/DNA.dir/command_controller/commands/load.cpp.i

CMakeFiles/DNA.dir/command_controller/commands/load.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/command_controller/commands/load.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/load.cpp -o CMakeFiles/DNA.dir/command_controller/commands/load.cpp.s

CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o: ../command_controller/commands/new.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/new.cpp

CMakeFiles/DNA.dir/command_controller/commands/new.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/command_controller/commands/new.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/new.cpp > CMakeFiles/DNA.dir/command_controller/commands/new.cpp.i

CMakeFiles/DNA.dir/command_controller/commands/new.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/command_controller/commands/new.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/command_controller/commands/new.cpp -o CMakeFiles/DNA.dir/command_controller/commands/new.cpp.s

CMakeFiles/DNA.dir/data_base/db.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/data_base/db.cpp.o: ../data_base/db.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DNA.dir/data_base/db.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/data_base/db.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/db.cpp

CMakeFiles/DNA.dir/data_base/db.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/data_base/db.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/db.cpp > CMakeFiles/DNA.dir/data_base/db.cpp.i

CMakeFiles/DNA.dir/data_base/db.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/data_base/db.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/db.cpp -o CMakeFiles/DNA.dir/data_base/db.cpp.s

CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o: ../data_base/dna/dna_object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_object.cpp

CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_object.cpp > CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.i

CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_object.cpp -o CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.s

CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o: ../data_base/dna/dna_sequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_sequence.cpp

CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_sequence.cpp > CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.i

CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/data_base/dna/dna_sequence.cpp -o CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.s

CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o: ../helper_structures/shared_ptr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/shared_ptr.cpp

CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/shared_ptr.cpp > CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.i

CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/helper_structures/shared_ptr.cpp -o CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.s

CMakeFiles/DNA.dir/parser/cli_parser.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/parser/cli_parser.cpp.o: ../parser/cli_parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/DNA.dir/parser/cli_parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/parser/cli_parser.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/parser/cli_parser.cpp

CMakeFiles/DNA.dir/parser/cli_parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/parser/cli_parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/parser/cli_parser.cpp > CMakeFiles/DNA.dir/parser/cli_parser.cpp.i

CMakeFiles/DNA.dir/parser/cli_parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/parser/cli_parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/parser/cli_parser.cpp -o CMakeFiles/DNA.dir/parser/cli_parser.cpp.s

CMakeFiles/DNA.dir/ui/cli.cpp.o: CMakeFiles/DNA.dir/flags.make
CMakeFiles/DNA.dir/ui/cli.cpp.o: ../ui/cli.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/DNA.dir/ui/cli.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNA.dir/ui/cli.cpp.o -c /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/ui/cli.cpp

CMakeFiles/DNA.dir/ui/cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNA.dir/ui/cli.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/ui/cli.cpp > CMakeFiles/DNA.dir/ui/cli.cpp.i

CMakeFiles/DNA.dir/ui/cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNA.dir/ui/cli.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/ui/cli.cpp -o CMakeFiles/DNA.dir/ui/cli.cpp.s

# Object files for target DNA
DNA_OBJECTS = \
"CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o" \
"CMakeFiles/DNA.dir/manager.cpp.o" \
"CMakeFiles/DNA.dir/main.cpp.o" \
"CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o" \
"CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o" \
"CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o" \
"CMakeFiles/DNA.dir/data_base/db.cpp.o" \
"CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o" \
"CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o" \
"CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o" \
"CMakeFiles/DNA.dir/parser/cli_parser.cpp.o" \
"CMakeFiles/DNA.dir/ui/cli.cpp.o"

# External object files for target DNA
DNA_EXTERNAL_OBJECTS =

DNA: CMakeFiles/DNA.dir/helper_structures/helper_function.cpp.o
DNA: CMakeFiles/DNA.dir/manager.cpp.o
DNA: CMakeFiles/DNA.dir/main.cpp.o
DNA: CMakeFiles/DNA.dir/command_controller/command_collection.cpp.o
DNA: CMakeFiles/DNA.dir/command_controller/commands/load.cpp.o
DNA: CMakeFiles/DNA.dir/command_controller/commands/new.cpp.o
DNA: CMakeFiles/DNA.dir/data_base/db.cpp.o
DNA: CMakeFiles/DNA.dir/data_base/dna/dna_object.cpp.o
DNA: CMakeFiles/DNA.dir/data_base/dna/dna_sequence.cpp.o
DNA: CMakeFiles/DNA.dir/helper_structures/shared_ptr.cpp.o
DNA: CMakeFiles/DNA.dir/parser/cli_parser.cpp.o
DNA: CMakeFiles/DNA.dir/ui/cli.cpp.o
DNA: CMakeFiles/DNA.dir/build.make
DNA: CMakeFiles/DNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rochel/Desktop/c++/dna-analyzer-project-rochelgarfunkel/DNA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable DNA"
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

