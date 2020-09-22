#ifndef __DNA_SEQUENCE_H__
#define __DNA_SEQUENCE_H__

#include <string>
#include <sstream>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

#include "idna.h"
#include "nucliotide.h"


class DnaSequence: public IDna
{

private:
    void init(const char *dna_seq);
    void nucInit(const DnaSequence& dna_seq);
    Nucliotide *m_sequence;
    size_t m_length;


public:
    DnaSequence(const char *dna_seq);
    DnaSequence(const std::string& dna_seq);
    DnaSequence(const DnaSequence& dna_seq);
    ~DnaSequence();

    const DnaSequence& operator= (const DnaSequence &dna_seq);
    const DnaSequence& operator= (const char* dna_seq);
    const DnaSequence& operator= (const std::string &dna_seq);
    bool operator== (const DnaSequence &dna_seq) const;
    bool operator!= (const DnaSequence &dna_seq) const;
    Nucliotide& operator[] (size_t index);
    const char operator[] (size_t index) const;
    std::string get();
    std::string getSeq() const;
    size_t getLength() const;
    static char getNucAsChar(Nucliotide nuc);

    DnaSequence getSlicedSeq (size_t strt_ind, size_t end_ind) const;
    DnaSequence getPairs () const;
    size_t findSubSeq (const DnaSequence& sub_seq_dna, size_t start) const;
    size_t countSubSeq (const DnaSequence& sub_seq_dna) const;
    std::vector<size_t> findAllSubSeq (const DnaSequence& sub_seq_dna) const;
    std::vector<DnaSequence> findConsensusSequence () const;

    friend std::ostream& operator<< (std::ostream& os, const DnaSequence &dna_seq);

};


inline DnaSequence::~DnaSequence()
{
    delete[] m_sequence;
}

inline const char DnaSequence::operator[] (size_t index) const
{
    if (index >= getLength())
        throw std::out_of_range("The index is out of range");

    return m_sequence[index];
}

inline Nucliotide& DnaSequence::operator[] (size_t index)
{
    if (index >= getLength())
        throw std::out_of_range("The index is out of range");

    return m_sequence[index];
}

inline std::string DnaSequence::get()
{
    std::stringstream ss;
    size_t len = getLength();
    for (size_t i = 0; i < len; ++i) {
        ss << m_sequence[i];
    }
    return ss.str();
}

inline std::string DnaSequence::getSeq() const
{
    std::string seq_as_str = "";

    for (size_t i = 0; i < getLength(); ++i)
        seq_as_str += m_sequence[i];

    return seq_as_str;
}

inline size_t DnaSequence::getLength () const
{
    return m_length;
}

inline std::ostream& operator<< (std::ostream& os, const DnaSequence& dna_seq)
{
    for (size_t i = 0; i < dna_seq.getLength(); ++i) {
        os << dna_seq[i];
        std::cout << dna_seq[i];
    }

    return os;
}


inline bool DnaSequence::operator== (const DnaSequence &dna_seq) const
{
    if (getLength() != dna_seq.getLength())
        return false;

    for (size_t i = 0; i < getLength(); ++i)
    {
        if (m_sequence[i] != dna_seq.m_sequence[i])
            return false;
    }

    return true;
}


inline bool DnaSequence::operator!= (const DnaSequence &dna_seq) const
{
    return !(*this == dna_seq);
}


inline char DnaSequence::getNucAsChar(Nucliotide nuc)
{
    return char(nuc);
}

#endif