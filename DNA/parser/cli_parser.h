#ifndef __CLI_PARSER_H__
#define __CLI_PARSER_H__

#include "iparser.h"

class CLIParser: public IParser
{
    ~CLIParser() {}
    std::vector<std::string> parse(std::string input) const;
};

#endif