#include <iostream>
#include "cli.h"
#include "../command_controller/commands/Icommand.h"


void CLI::run(std::string(*call_back)(std::vector<std::string>&, DB*), DB* db) const
{
    while (true)
    {
      std::string command = readCommand();
      std::vector<std::string> parsed_command = parser.parse(command);
      if (parsed_command[0] == "quit")
          return;

      std::string output =  call_back(parsed_command, db);
      writeOutput(output);
    }
}

std::string CLI::readCommand() const
{
    std::string input;

    while (input.empty())
    {
        std::cout << "\n>>> ";
        std::getline(std::cin, input);
    }
    return input;
}


void CLI::writeOutput(const std::string& output) const
{
    std::cout << output;
}


