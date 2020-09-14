#ifndef __MANAGER_H__
#define __MANAGER_H__

class IUI;
class IParser;
class IOHandler;

class Manager
{
public:
	Manager(IUI* ui, IParser* parser, IOHandler* io_handler);
	void run();
	static void quit();

private:
	IUI* m_ui;
	IParser* m_parser;
};

#endif
