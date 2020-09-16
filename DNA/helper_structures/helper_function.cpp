#include "helper_functions.h"

std::string size_tToString (size_t num_as_size_t)
{
    std::stringstream temp;
    temp << num_as_size_t;
    return temp.str();
}