#include <iostream>
#include "save.h"
#include "../../data_base/db.h"
#include "../command_collection.h"
#include "../../helper_structures/helper_functions.h"

static bool dummy = CommandCollection::getInstance() -> addToMap("save", new Save);
std::string Save::m_doc = "saves sequence <seq> to a file.\n"
                          "If <filename> is not provided, the sequence name is being used.\n"
                          "The filename is suffixed by .rawdna.";

Save::Save(): m_seq_id(0), m_file_name("")
{}

void Save::help()
{
    std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

std::string Save::parse(std::vector<std::string> params)
{
    switch (params.size())
    {
        case 0:
            return "too few arguments\ntype 'help load' for help\n";

        case 2:
            m_file_name = params[FILENAME];

        case 1:
            if (params[SEQID][0] != '#')
                return "type '#' before sequence id\n";

            std::istringstream(params[SEQID].substr(1)) >> m_seq_id;
            return "OK";

        default:
            return "too many arguments\ntype 'new help' for help\n";
    }
}

std::string Save::execute(DB* db)
{
    try
    {
        DNAObject dna = db -> getById(m_seq_id);

        if (m_file_name.empty())
            m_file_name = dna.getName();

        std::string path = "saved_sequences/" + m_file_name + ".rawdna";
        std::string seq = dna.getSequence(db);

        writeToFile(path, seq);

        return "Dna #" + size_tToString(m_seq_id) + " saved to file " + m_file_name + ".rawdna";

    }
    catch (const std::out_of_range& e)
    {
        return "Sequence not found.\n";
    }
}

void Save::clear()
{
    m_seq_id = 0;
    m_file_name = "";
}