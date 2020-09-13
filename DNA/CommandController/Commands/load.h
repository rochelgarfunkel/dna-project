#ifndef __LOAD_H__
#define __LOAD_H__

#pragma once
#include <string>
#include <vector>
#include "Icommand.h"

class Load : public ICommand
{
public:
	Load(std::string fileName, std::string dnaName = NULL);
	void help();
	void execute();

private:
	static std::string m_doc;
	std::string m_fileName;
	std::string m_optionalName;
};

#endif
