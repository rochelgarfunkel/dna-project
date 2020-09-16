#include <iostream>

#include "manager.h"
#include "ui/iui.h"
#include "command_controller/command_collection.h"
#include "data_base/db.h"

Manager::Manager(IUI* ui): m_ui(ui), m_db(new DB)
{
    CommandCollection::initMap(new DB());
}


void Manager::run()
{
    std::cout << "running manager\n";
    m_ui -> run();
    quit();
}

void Manager::quit()
{
    std::cout << "Goodbye!!\n";
}
