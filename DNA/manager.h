#ifndef __MANAGER_H__
#define __MANAGER_H__

class ICLI;
class IParser;
class DB;

class Manager
{
public:
	Manager(ICLI &cli, IParser &parser);
	void run();
	void quit();

private:
    void getAndExecuteCmd(std::string &input);
	ICLI* m_cli;
	IParser* m_parser
	DB* m_db
};

#endif
