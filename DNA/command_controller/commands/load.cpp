#include <iostream>
#include "load.h"

std::string Load::m_doc = "Loads the sequence from the file, assigns it with a number (ID) and a default name, if one was not provided (based on the file name, possibly postfixed with a number if the name already exists), and prints it.";

Load::Load(DB* db): m_db(db)
{}

void Load::help()
{
	std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

std::string Load::execute(std::vector<std::string>& params)
{
	std::cout << "executing load!!!\n";
    return "ok";
}