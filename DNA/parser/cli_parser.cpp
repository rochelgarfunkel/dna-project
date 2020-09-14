#include <string>
#include "cli_parser.h"

 std::vector<std::string> CLIParser::parse(std::string cmd) const
{
    size_t start;
    size_t end = 0;
    std::vector<std::string> parsed_cmd;

    while ((start = cmd.find_first_not_of(' ', end)) != std::string::npos)
    {
        end = cmd.find(' ', start);
        parsed_cmd.push_back(cmd.substr(start, end - start));
    }
    return parsed_cmd;
}
