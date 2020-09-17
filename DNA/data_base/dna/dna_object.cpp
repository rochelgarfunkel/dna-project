#include "dna_object.h"
#include "dna_sequence.h"
#include "../../helper_structures/helper_functions.h"

DNAObject::DNAObject(size_t id, std::string& name, IDna* sequence): m_id(id), m_name(name), m_sequence(sequence)
{}

size_t DNAObject::getId() const
{
    return m_id;
}

std::string DNAObject::getName() const
{
    return m_name;
}

std::string DNAObject::getSequence() const
{
    DnaSequence* tmp = dynamic_cast<DnaSequence*>(m_sequence -> get());
    return tmp -> getSeq();
}

std::string DNAObject::prepareOutput() const
{
    return "[" + size_tToString(m_id) + "] " + m_name + ": " + getSequence();
}
