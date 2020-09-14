#include "dna_object.h"
#include "dna_sequence.h"

DNAObject::DNAObject(size_t id, std::string name, std::string sequence): m_id(id), m_name(name), m_sequence(DnaSequence(sequence))
{}

size_t DNAObject::getId() const
{
    return m_id;
}

std::string DNAObject::getName() const
{
    return m_name;
}

DnaSequence DNAObject::getSequence() const
{
    return m_sequence;
}