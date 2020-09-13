#ifndef __IO_HANDLER_H__
#define __IO_HANDLER_H__

class IOHandler
{
public:
    virtual std::string read(const std::string& file_name)  = 0 const;
    virtual void write(const std::string& file_name, std::string dna)  = 0 const;
};

#endif