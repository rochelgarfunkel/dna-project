#ifndef __DNA_SEQUENCE_H__
#define __DNA_SEQUENCE_H__

#include <string>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

#include "sequence_error.h"
#include "idna.h"


static const char s_dna_chars[8] = {'A', 'C', 'T', 'G', 'a', 'c', 't', 'g'};

class DnaSequence: public IDna
{

private:
    class Nucliotide
    {

    public:
        Nucliotide(char c);
        Nucliotide();
        Nucliotide& operator= (char c);
        operator char();
        char getPair () const;

    private:
        bool isValidNuc (const char c) const;
        char m_char;

    };

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
    IDna* get();
    std::string getSeq() const;
    size_t getLength() const;

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

inline DnaSequence::Nucliotide& DnaSequence::operator[] (size_t index)
{
    if (index >= getLength())
        throw std::out_of_range("The index is out of range");

    return m_sequence[index];
}

inline const char DnaSequence::operator[] (size_t index) const
{
    if (index >= getLength())
        throw std::out_of_range("The index is out of range");

    return m_sequence[index];
}

inline IDna* DnaSequence::get()
{
    return this;
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


inline DnaSequence::Nucliotide::Nucliotide(char c)
{
    if (isValidNuc(c))
    {
        m_char = char(toupper(c));
    }

    else
    {

        throw SequenceError();
    }
}

inline DnaSequence::Nucliotide::Nucliotide() {}

inline DnaSequence::Nucliotide& DnaSequence::Nucliotide::operator= (char c)
{
    if (isValidNuc(c))
    {
        m_char = char(toupper(c));
    }

    else
    {

        throw SequenceError();
    }

    return *this;
}

inline DnaSequence::Nucliotide:: operator char()
{
    return m_char;
}

inline bool DnaSequence::Nucliotide:: isValidNuc(const char c) const
{
    for (size_t i = 0; i < 8; ++i)
    {
        if (s_dna_chars[i] == c)
        {
            return true;
        }
    }

    return false;
}

inline char DnaSequence::Nucliotide::getPair () const
{
    std::map <char, char> pair;

    pair['A'] = 'T';
    pair['T'] = 'A';
    pair['C'] = 'G';
    pair['G'] = 'C';

    return pair[m_char];
}

inline std::ostream& operator<< (std::ostream& os, const DnaSequence& dna_seq)
{
    for (size_t i = 0; i < dna_seq.getLength(); ++i)
        os << dna_seq.m_sequence[i];

    os << std::endl;

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


#endif