#include <iostream>
#include "manager.h"
#include "ui/iui.h"
#include "command_controller/command_collection.h"
#include "data_base/db.h"
#include "command_controller/commands/Icommand.h"

Manager::Manager(IUI* ui): m_ui(ui), m_db(new DB)
{}

void Manager::run()
{
    std::cout << "running manager\n";
    m_ui -> run(handleCommand, m_db);
    quit();
}

std::string Manager::handleCommand(std::vector<std::string>& command, DB* db)
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
    return output;
}

void Manager::quit()
{
    delete m_db;
    delete CommandCollection::getInstance();

    std::cout << "Goodbye!!\n";
}
