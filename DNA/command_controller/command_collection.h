#ifndef __COMMAND_COLLECTION_H__
#define __COMMAND_COLLECTION_H__

#include <string>
#include <map>

class ICommand;
class DB;

class CommandCollection
{
public:
    static void initMap(DB* db);
    static std::string help();
    static ICommand* getCommand(std::string command_as_str);

private:
    static std::map<std::string, ICommand*> m_commands_map;
};

#endif


