#ifndef __COMMAND_COLLECTION_H__
#define __COMMAND_COLLECTION_H__

#include <string>
#include <map>
#include "../helper_structures/shared_ptr.h"

class ICommand;
class DB;

class CommandCollection
{
public:
    ~CommandCollection();

    static CommandCollection* getInstance();
    static bool addToMap(const std::string& cmd_name, ICommand* command);

    static std::string help();
    static ICommand* getCommand(const std::string& command_as_str);
    static std::map<std::string, ICommand*> m_commands_map;

private:
    CommandCollection() {};
    static CommandCollection* m_instance;
};

#endif


