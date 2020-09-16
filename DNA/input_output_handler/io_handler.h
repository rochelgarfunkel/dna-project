#ifndef __IO_HANDLER_H__
#define __IO_HANDLER_H__

#include <string>
class IOHandler
{
public:
    virtual ~IOHandler() {}
    virtual std::string read(const std::string& file_name) const = 0;
    virtual void write(const std::string& file_name, std::string dna) const = 0;
};

#endif