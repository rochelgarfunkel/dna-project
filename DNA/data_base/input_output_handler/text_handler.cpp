#include "text_handler.h"

TextHandler::TextHandler(std::string folder_path): FileIO(folder_path)
{}

std::string TextHandler::read(const std::string& file_name) const
{
    return "ACGCGACGA";
}

void TextHandler::write(const std::string& file_name, std::string dna) const
{

}