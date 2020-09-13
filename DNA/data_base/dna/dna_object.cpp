#include "dna_object.h"

size_t DNAObject::getId() const
{
    return m_id;
}

std::string DNAObject::getName() const
{
    return m_name;
}

DnaSequence& DNAObject::getSequence() const
{
    return m_sequence;
}