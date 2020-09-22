#include <iostream>
#include "../../helper_structures/helper_functions.h"
#include "dup.h"
#include "../../data_base/db.h"
#include "../command_collection.h"
#include "../../data_base/dna/decorators/dup_decorator.h"

static bool dummy = CommandCollection::getInstance() -> addToMap("dup", new Dup);

std::string Dup::m_doc = "duplicates the sequence. If a new name is not provided, then it will be based on the name of <seq>, suffixed by _1 (or _2, _3, ... if the name is already taken).";

Dup::Dup(): m_seq_id(0), m_seq_name("")
{}

void Dup::help()
{
    std::cout << "DOCUMENTATION\n" << m_doc << std::endl;
}

std::string Dup::parse(std::vector<std::string> params)
{
    switch (params.size())
    {
        case 0:
            return "too few arguments\ntype 'help load' for help\n";

        case 2:
            if (params[SEQNAME][0] != '@')
                return "type '@' before sequence name\n";
            m_seq_name = params[SEQNAME].substr(1);

        case 1:
            if (params[SEQID][0] != '#')
                return "type '#' before sequence id\n";

            std::istringstream(params[SEQID].substr(1)) >> m_seq_id;
            return "OK";

        default:
            return "too many arguments\ntype 'new help' for help\n";
    }
}

std::string Dup::execute(DB* db)
{
    try
    {
        DNAObject dna = db -> getById(m_seq_id);

        size_t seq_id = db -> getNewId();

        if (m_seq_name.empty() or db -> nameExists(m_seq_name))
            getDefaultName(seq_id, dna.getName(), db);

        DupDecorator* dup_dec = new DupDecorator(dna.get());
        db -> addDna(new DNAObject(seq_id, m_seq_name, dup_dec));
        return db -> getById(seq_id).prepareOutput(db);
    }
    catch (const std::out_of_range& e)
    {
        return "Sequence not found.\n";
    }

}

void Dup::clear()
{
    m_seq_id = 0;
    m_seq_name = "";
}

void Dup::getDefaultName(size_t id, const std::string& last_name, DB* db)
{
    if (m_seq_name.empty())
        m_seq_name = last_name;

    size_t i = 1;
    m_seq_name += "_";

    std::string tmp_name = m_seq_name + size_tToString(i++);

    while (db -> nameExists(tmp_name))
        tmp_name= m_seq_name + size_tToString(i++);

    m_seq_name = tmp_name;
}