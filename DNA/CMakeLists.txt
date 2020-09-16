CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
project(DNA)
set(CMAKE_CXX_STANDARD 14)

add_executable(DNA helper_structures/helper_function.cpp manager.cpp main.cpp command_controller/command_collection.cpp command_controller/commands/load.cpp command_controller/commands/new.cpp data_base/db.cpp data_base/dna/dna_object.cpp data_base/dna/dna_sequence.cpp helper_structures/shared_ptr.cpp parser/cli_parser.cpp ui/cli.cpp)