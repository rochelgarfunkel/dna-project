#include <iostream>
#include "cli.h"
#include "../command_controller/commands/Icommand.h"
#include "../command_controller/command_collection.h"


void CLI::run(DB* db) const
{
    while (true)
    {
      std::string command = readCommand();
      std::vector<std::string> parsed_command = parser.parse(command);
      if (parsed_command[0] == "quit")
          return;

      else handleCommand(parsed_command, db);
    }
}

std::string CLI::readCommand() const
{
    std::string input;

    while (input.empty()) {
        std::cout << "\n>>> ";
        std::getline(std::cin, input);
    }
    return input;
}


void CLI::handleCommand(std::vector<std::string>& command, DB* db) const
{
    std::string command_name = command.front();
    std::string output(command_name + ": command not found");

    command.erase(command.begin());
    ICommand* command_obj = CommandCollection::getCommand(command_name);
    if (command_obj)
    {
        output = command_obj->parse(command);

        if (output == "OK")
            output = command_obj -> execute(db);
    }

    command_obj -> clear();
    writeOutput(output);
}

void CLI::writeOutput(const std::string& output) const
{
    std::cout << output;
}


