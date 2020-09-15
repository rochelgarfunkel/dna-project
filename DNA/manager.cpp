#include <iostream>

#include "manager.h"
#include "ui/cli.h"
#include "command_controller/command_collection.h"
#include "data_base/db.h"
#include "parser/cli_parser.h"

Manager::Manager(CLI* ui, IOHandler* io_handler): m_ui(ui), m_parser(new CLIParser), m_io_handler(io_handler), m_db(new DB)
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
