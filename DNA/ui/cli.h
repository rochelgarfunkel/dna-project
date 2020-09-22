#ifndef __CLI_H__
#define __CLI_H__

#include "iui.h"
#include "../parser/cli_parser.h"

class CLI: public IUI
{
public:
    ~CLI() {}
    void run(std::string(*call_back)(std::vector<std::string>&, DB*), DB* db) const;
    void writeOutput(const std::string& output) const;

private:
    std::string readCommand() const;
    CLIParser parser;
};

#endif