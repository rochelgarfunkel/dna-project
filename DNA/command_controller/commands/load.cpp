#include <iostream>
#include <fstream>
#include "load.h"
#include "../command_collection.h"

std::string Load::m_doc = "Loads the sequence from the file, assigns it with a number (ID) and a default name, if one was not provided (based on the file name, possibly postfixed with a number if the name already exists), and prints it.";

Load::Load(DB* db): m_db(db), m_file_name(""), m_seq_name("")
{}

void Load::help()
{
	std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

std::string Load::parse(std::vector<std::string> params)
{
    switch (params.size())
    {
        case 0:
            return "too few arguments\ntype 'help load' for help\n";

        case 2:
            if (params[1][0] != '@')
                return "type '@' before sequence name\n";

            m_seq_name = params[1];

        case 1:
            m_file_name = params[0];
            return "OK";

        default:
            return "too many arguments\ntype 'new help' for help\n";
    }
}

std::string Load::execute()
{
    std::string path = "saved_sequences/" + m_file_name;
    std::string line;
    std::ifstream myfile;
    std::string sequence;
    myfile.open(path.c_str());

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            sequence +=  line;
        }

        myfile.close();
    }

    else return "Unable to read " + m_file_name;

    std::vector<std::string> params;
    params.push_back(sequence);

    if (m_seq_name != "")
        params.push_back(m_seq_name);

    CommandCollection::getCommand("new") -> parse(params);
    std::string res = CommandCollection::getCommand("new") -> execute();
    CommandCollection::getCommand("new") -> clear();

    return res;
}

void Load::clear()
{
    m_seq_name = "";
    m_file_name = "";
}