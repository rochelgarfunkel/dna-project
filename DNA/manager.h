#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <vector>

class IParser;
class IOHandler;
class DB;
class IUI;

class Manager
{
public:
	Manager(IUI* ui);
	void run();
    static std::string handleCommand(std::vector<std::string>& command, DB* db);
	void quit();

private:
	IUI* m_ui;
    DB* m_db;
};

#endif
