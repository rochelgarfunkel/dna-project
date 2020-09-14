#ifndef __LOAD_H__
#define __LOAD_H__

#include <string>
#include <vector>
#include "Icommand.h"

class Load : public ICommand
{
public:
	Load(DB* db);
    ~Load() {}

	void help();
	std::string execute(std::vector<std::string>& params);
	DB* m_db;

private:
    static std::string m_doc;
};

#endif
