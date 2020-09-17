#include <fstream>
#include "helper_functions.h"

std::string size_tToString (size_t num_as_size_t)
{
    std::stringstream temp;
    temp << num_as_size_t;
    return temp.str();
}

std::string readFromFile(const std::string& path)
{
    std::string line;
    std::ifstream myfile;
    std::string input;
    myfile.open(path.c_str());

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            input += line;
        }

        myfile.close();
        return input;
    }

    return "";
}

void writeToFile(const std::string& path, const std::string& input)
{
    std::ofstream myfile;
    myfile.open(path.c_str());

    myfile << input << std::endl;
    myfile.close();
}