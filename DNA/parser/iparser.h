#ifndef __IPARSER_H__
#define __IPARSER_H__

#include <vector>
#include <string>

class IParser
{
public:
    virtual ~IParser() {}
    virtual std::vector<std::string> parse(std::string input) const = 0;
};

#endif