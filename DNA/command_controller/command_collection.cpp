#include "../helper_structures/helper_functions.h"
#include "command_collection.h"
#include "../command_controller/commands/new.h"
#include "../command_controller/commands/load.h"
#include "../command_controller/commands/save.h"


std::map<std::string, ICommand*> CommandCollection::m_commands_map;

CommandCollection* CommandCollection::m_instance(NULL);

CommandCollection::~CommandCollection()
{
    std::map<std::string, ICommand*>::iterator it;

    for ( it = m_commands_map.begin(); it != m_commands_map.end(); it++ )
    {
        delete it->second;
    }
}

CommandCollection* CommandCollection::getInstance()
{
    if (not m_instance)
    {
        m_instance = new CommandCollection();
    }

    return m_instance;
}

bool CommandCollection::addToMap(const std::string& cmd_name, ICommand* command)
{
    CommandCollection::m_commands_map.insert(std::pair<std::string, ICommand*>(cmd_name, command));
    return true;
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
