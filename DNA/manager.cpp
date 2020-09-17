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
    m_ui -> run(m_db);
    quit();
}

void Manager::quit()
{
    std::map<std::string, ICommand*>::iterator it;

    for ( it = CommandCollection::m_commands_map.begin(); it != CommandCollection::m_commands_map.end(); it++ )
    {
        delete it->second;
    }

    delete CommandCollection::getInstance();

    std::cout << "Goodbye!!\n";
}
