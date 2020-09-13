#ifndef __CLI_PARSER_H__
#define __CLI_PARSER_H__

class CLIParser: public CLIParser
{
    std::vector<std::string> parse(std::string input) const;
};

#endif