#ifndef __JSON_HANDLER_H__
#define __JSON_HANDLER_H__

#include "file_io.h"

class JsonHandler: public FileIO
{
public:
    std::string read(const std::string& file_name) const;
    void write(const std::string& file_name, std::string dna) const;
};

#endif