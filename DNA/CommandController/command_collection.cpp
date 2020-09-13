#include <iostream>
#include "command_collection.h"
#include "../CommandController/Commands/Icommand.h"
#include "../CommandController/Commands/load.h"


std::map<std::string, ICommand&> initMap()
{
	std::map<std::string, ICommand&> mapToReturn;
	ICommand* load = new Load();
    ICommand* _new = new New();
    ICommand* save = new Save();
	mapToReturn.insert(std::pair<std::string, ICommand*>("load", load));
    mapToReturn.insert(std::pair<std::string, ICommand*>("new", _new));
    mapToReturn.insert(std::pair<std::string, ICommand*>("save", save));
	return mapToReturn;
}

std::map<std::string, ICommand&> CommandCollection::m_commands_map = initMap();


static void CommandCollection::help() const
{
	std::cout << "Current Commands:\n";
	std::map<std::string, ICommand&>::iterator it = m_commands_map.begin();
	for (size_t i = 0; it != m_map.end(); ++it, ++i) 
	{
		std::cout << i << ". " << (*it).first << std::endl;
	}
}


static ICommand* CommandCollection::getCommand(std::string command_as_str) const
{
    return m_commands_map[command_as_str];
}