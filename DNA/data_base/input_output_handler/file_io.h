#ifndef __FILE_IO_H__
#define __FILE_IO_H__

#include "io_handler.h"


class FileIO: public  IOHandler
{
public:
    std::string read(const std::string& file_name) const;
    void write(const std::string& file_name, std::string dna) const;
};

#endif