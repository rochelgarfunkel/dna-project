#ifndef __NEW_H__
#define __NEW_H__

#include <string>
#include <vector>
#include "Icommand.h"

class New : public ICommand
{
public:
    New();
    ~New() {}

    void help();
    std::string parse(std::vector<std::string>);
    std::string execute(DB* db);
    void clear();

private:
    std::string m_sequence;
    std::string m_seq_name;
    static std::string m_doc;
    void getDefaultName(size_t id, DB* db);
};

#endif