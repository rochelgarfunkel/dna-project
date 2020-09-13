#ifndef __IPARSER_H__
#define __IPARSER_H__

class IParser
{
public:
    virtual std::vector<std::string> parse(std::string input) = 0;
    virtual ~IParser() {}
};

#endif