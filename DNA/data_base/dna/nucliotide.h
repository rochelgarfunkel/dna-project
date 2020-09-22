#ifndef __NUCLIOTIDE_H__
#define __NUCLIOTIDE_H__

#include <string>
#include <sstream>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "sequence_error.h"


static const char s_dna_chars[8] = {'A', 'C', 'T', 'G', 'a', 'c', 't', 'g'};

class Nucliotide
{

public:
    Nucliotide(char c);
    Nucliotide();
    Nucliotide& operator= (char c);
    operator char() const;
    char getPair () const;

private:
    bool isValidNuc (const char c) const;
    char m_char;
};


inline Nucliotide::Nucliotide(char c)
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

inline Nucliotide::Nucliotide() {}

inline Nucliotide& Nucliotide::operator= (char c)
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

inline Nucliotide:: operator char() const
{
    return m_char;
}

inline bool Nucliotide:: isValidNuc(const char c) const
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

inline char Nucliotide::getPair () const
{
    std::map <char, char> pair;

    pair['A'] = 'T';
    pair['T'] = 'A';
    pair['C'] = 'G';
    pair['G'] = 'C';

    return pair[m_char];
}



#endif