#ifndef __MANAGER_H__
#define __MANAGER_H__

class IParser;
class IOHandler;
class DB;
class IUI;

class Manager
{
public:
	Manager(IUI* ui);
	void run();
	static void quit();

private:
	IUI* m_ui;
    DB* m_db;
};

#endif
