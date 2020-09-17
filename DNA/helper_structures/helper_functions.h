#ifndef __HELPER_FUNCTIONS_H__
#define __HELPER_FUNCTIONS_H__

#include <sstream>

std::string size_tToString (size_t num_as_size_t);
std::string readFromFile(const std::string& path);
void writeToFile(const std::string& path, const std::string& input);

#endif