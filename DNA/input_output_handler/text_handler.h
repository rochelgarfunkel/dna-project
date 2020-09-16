#ifndef __TEXT_HANDLER_H__
#define __TEXT_HANDLER_H__

#include "file_io.h"

class TextHandler: public FileIO
{
public:
    TextHandler(std::string folder_path);
    ~TextHandler() {}

    std::string read(const std::string& file_name) const;
    void write(const std::string& file_name, std::string dna) const;
};

#endif