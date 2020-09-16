#include "../helper_structures/helper_functions.h"
#include "command_collection.h"
#include "../command_controller/commands/new.h"
#include "../command_controller/commands/load.h"


std::map<std::string, ICommand*> CommandCollection::m_commands_map;

void CommandCollection::initMap(DB* db)
{
    CommandCollection::m_commands_map.insert(std::pair<std::string, ICommand*>("load", new Load(db)));
    CommandCollection::m_commands_map.insert(std::pair<std::string, ICommand*>("new", new New(db)));
//    CommandCollection::m_commands_map.insert(std::pair<std::string, ICommand*>("save", new Save(db));
}

std::string CommandCollection::help()
{
    std::string output = "Current Commands:\n";
	std::map<std::string, ICommand*>::iterator it = m_commands_map.begin();
	for (size_t i = 0; it != m_commands_map.end(); ++it, ++i)
	{
		output += (size_tToString(i) + ". " + (*it).first) + "\n";
	}

	return output;
}


ICommand* CommandCollection::getCommand(const std::string& command_as_str)
{
    if (m_commands_map.count(command_as_str) == 0)
        return NULL;

    return m_commands_map[command_as_str];
}
