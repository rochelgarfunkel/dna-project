#ifndef __COMMAND_COLLECTION_H__
#define __COMMAND_COLLECTION_H__

#include <string>
#include <map>

class ICommand

class CommandCollection:
{
public:
    static void help() const;
    static ICommand* getCommand(std::string command_as_str) const;

private:
    static std::map<std::string, ICommand*> m_commands_map;
    static void initMap();
};

#endif


