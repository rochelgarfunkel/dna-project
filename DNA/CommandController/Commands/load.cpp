#include <iostream>
#include "load.h"

std::string Load::m_doc = "Loads the sequence from the file, assigns it with a number (ID) and a default name, if one was not provided (based on the file name, possibly postfixed with a number if the name already exists), and prints it.";

Load::Load(std::string fileName, std::string dnaName):
	m_fileName(fileName), m_optionalName(dnaName)
{}

void Load::help()
{
	std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

void Load::execute()
{
	std::cout << "executing load!!!\n";
}