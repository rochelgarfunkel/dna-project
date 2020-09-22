#include "dup_decorator.h"
#include "../dna_sequence.h"

DupDecorator::DupDecorator(IDna* idna) : Decorator(idna)
{}

const char DupDecorator::operator[] (size_t i) const
{
    return DnaSequence::getNucAsChar((*(m_idna.get()))[i]);
}

Nucliotide& DupDecorator::operator[] (size_t i)
{
    return (*(m_idna.get()))[i];
}



