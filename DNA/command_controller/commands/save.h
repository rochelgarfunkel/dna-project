#ifndef __SAVE_H__
#define __SAVE_H__

#include <string>
#include <vector>
#include "Icommand.h"

class Save : public ICommand
{
public:
    Save();
    ~Save() {}

    void help();
    std::string parse(std::vector<std::string>);
    std::string execute(DB* db);
    void clear();

private:
    size_t m_seq_id;
    std::string m_file_name;
    static std::string m_doc;
    typedef enum {SEQID, FILENAME} m_params;
};

#endif