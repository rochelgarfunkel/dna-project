#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#include <vector>
#include <string>

class DB;

class ICommand
{
public:
    virtual ~ICommand() {}
	virtual void help() = 0;
    virtual std::string parse(std::vector<std::string> params) = 0;
	virtual std::string execute() = 0;
	virtual void clear() = 0;
};

#endif