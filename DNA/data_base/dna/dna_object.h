#ifndef __DNA_OBJECT_H__
#define __DNA_OBJECT_H__

#include "dna_sequence.h"

class DNAObject
{
public:
    DNAObject(size_t id, std::string name, std::string sequence);
    size_t getId() const;
    std::string getName() const;
    DnaSequence getSequence() const;

private:
    size_t m_id;
    std::string m_name;
    DnaSequence m_sequence;
};


#endif
