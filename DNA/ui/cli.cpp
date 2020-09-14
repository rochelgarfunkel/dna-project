#include <iostream>
#include "cli.h"
#include "../parser/iparser.h"
#include "../command_controller/commands/Icommand.h"
#include "../command_controller/command_collection.h"

void CLI::run(IParser* parser) const
{
    while (true)
    {
      std::string command = readCommand();
      std::vector<std::string> parsed_command = parser -> parse(command);
      if (parsed_command[0] == "quit")
          return;

      else handleCommand(parsed_command);
    }
}

std::string CLI::readCommand() const
{
    std::cout << ">>> ";
    std::string input;
    std::cin >> input;
    return input;
}


void CLI::handleCommand(std::vector<std::string>& command) const
{
    std::string command_name = command.front();
    if (command_name == "help")
        std::string output = CommandCollection::help();

    else
    {
        command.erase(command.begin());
        std::string output = CommandCollection::getCommand(command_name)->execute(command);
    }

    writeOutput(output);
}

void CLI::writeOutput(const std::string& output) const
{
    std::cout << output;
}


