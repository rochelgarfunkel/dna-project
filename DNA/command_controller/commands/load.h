#ifndef __LOAD_H__
#define __LOAD_H__

#include <string>
#include <vector>
#include "Icommand.h"

class Load : public ICommand
{
public:
	Load();
    ~Load() {}

	void help();
    std::string parse(std::vector<std::string>);
	std::string execute(DB* db);
	void clear();

private:
    std::string m_file_name;
    std::string m_seq_name;
    static std::string m_doc;
};

#endif
