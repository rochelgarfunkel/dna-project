#ifndef __DUP_H__
#define __DUP_H__

#include <string>
#include <vector>
#include "Icommand.h"

class Dup : public ICommand
{
public:
    Dup();
    ~Dup() {}

    void help();
    std::string parse(std::vector<std::string>);
    std::string execute(DB* db);
    void clear();

private:
    size_t m_seq_id;
    std::string m_seq_name;
    static std::string m_doc;
    typedef enum {SEQID, SEQNAME} m_params;
    void getDefaultName(size_t id, const std::string& last_name, DB* db);
};

#endif