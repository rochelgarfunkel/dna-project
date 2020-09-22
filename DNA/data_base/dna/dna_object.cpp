#include "dna_object.h"
#include "dna_sequence.h"
#include "../../helper_structures/helper_functions.h"

DNAObject::DNAObject(size_t id, std::string& name, IDna* sequence): m_id(id), m_name(name), m_sequence(SharedPtr<IDna>(sequence))
{}

size_t DNAObject::getId() const
{
    return m_id;
}

std::string DNAObject::getName() const
{
    return m_name;
}

IDna* DNAObject::get()
{
    return m_sequence.get();
}

std::string DNAObject::getSequence(DB* db) const
{
    return ((DnaSequence*)(m_sequence.get())) -> get();
}

std::string DNAObject::prepareOutput(DB* db) const
{
    return "[" + size_tToString(m_id) + "] " + m_name + ": " + getSequence(db);
}
