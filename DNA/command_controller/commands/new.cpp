#include <iostream>
#include "../../helper_structures/helper_functions.h"
#include "new.h"
#include "../../data_base/db.h"

std::string New::m_doc = "Creates a new sequence, as described by the followed sequence.If the @<sequence_name> is used, then this will be the name of the new sequence.\n"
                         "\n"
                         "Otherwise, a default name will be provided - seq1 (or seq2, seq3 and so on, if the name is already taken).\n"
                         "\n"
                         "The new sequence, its name and its number (internal ID, starting with 1) are printed.";

New::New(DB* db): m_db(db), m_sequence(""), m_seq_name("")
{}

void New::help()
{
    std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

std::string New::parse(std::vector<std::string> params)
{
    switch (params.size())
    {
        case 0:
            return "too few arguments\ntype 'help new' for help\n";

        case 2:
            if (params[1][0] != '@')
                return "type '@' before sequence name\n";

            m_seq_name = params[1].substr(1);

        case 1:
            m_sequence = params[0];
            return "OK";

        default:
            return "too many arguments\ntype 'new help' for help\n";
    }
}

std::string New::execute()
{
    IDna* dna = NULL;

    try
    {
        dna = new DnaSequence(m_sequence);
    }
    catch (const SequenceError& se )
    {
        return se.what();
    }

    size_t seq_id = m_db -> getNewId();

    if (m_seq_name == "" or m_db -> nameExists(m_seq_name))
        getDefaultName(seq_id);

    m_db -> addDna(new DNAObject(seq_id, m_seq_name, dna));
    return m_db -> getById(seq_id).prepareOutput();
}

void New::clear()
{
    m_sequence = "";
    m_seq_name = "";
}

void New::getDefaultName(size_t id)
{
    if (m_seq_name == "")
        m_seq_name = "sequence";

    m_seq_name += "_" + size_tToString(id);

    while (m_db -> nameExists(m_seq_name))
        m_seq_name += "_" + size_tToString(id);
}