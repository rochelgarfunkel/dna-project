#ifndef __FILE_IO_H__
#define __FILE_IO_H__

#include "io_handler.h"


class FileIO: public  IOHandler
{
public:
    FileIO(std::string folder_path);
    virtual ~FileIO() {}

    std::string read(const std::string& file_name) const = 0;
    void write(const std::string& file_name, std::string dna) const = 0;

    std::string m_folder_path;
};

inline FileIO::FileIO(std::string folder_path): m_folder_path(folder_path)
{}

#endif