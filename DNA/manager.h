#ifndef __MANAGER_H__
#define __MANAGER_H__

class CLI;
class IParser;
class IOHandler;
class DB;
class IUI;

class Manager
{
public:
	Manager(CLI* ui, IOHandler* io_handler); //overload for cli (ass overload for gui)
	void run();
	static void quit();

private:
	IUI* m_ui;
	IParser* m_parser;
    DB* m_db;
    IOHandler* m_io_handler;
};

#endif
