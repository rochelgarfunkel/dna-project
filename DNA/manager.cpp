#include <iostream>

#include "manager.h"
#include "ui/iui.h"
#include "command_controller/command_collection.h"
#include "data_base/db.h"

Manager::Manager(IUI* ui, IParser* parser, IOHandler* io_handler): m_ui(ui), m_parser(parser)
{
    CommandCollection::initMap(new DB(io_handler));
}

void Manager::run()
{
    std::cout << "running manager/n";
    m_ui -> run(m_parser);
    quit();
}

void Manager::quit()
{
    std::cout << "Goodbye!!";
    exit(0);
}
