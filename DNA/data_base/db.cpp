#include "db.h"

DB::DB(): m_dna_id(0)
{}

DB::~DB()
{
    std::list<DNAObject*>::iterator it;

    for ( it = m_dnas.begin(); it != m_dnas.end(); it++ )
    {
        delete *it;
    }
}

DNAObject& DB::getById(size_t id)
{
    return *(m_id_map.at(id));
}


DNAObject& DB::getByName(const std::string& name)
{
    return *(m_name_map.at(name));
}

bool DB::nameExists(const std::string& name) const
{
    return m_name_map.count(name) > 0;
}

void DB::addDna(DNAObject* dna)
{
    m_dnas.push_back(dna);
    m_id_map[dna -> getId()] = dna;
    m_name_map[dna -> getName()] = dna;
}

size_t DB::getNewId()
{
    return m_dna_id++;
}



