#include <fstream>

#include "dna_sequence.h"


void DnaSequence::init(const char *dna_seq)
{
    if (!dna_seq)
        throw SequenceError();

    size_t tmp_length = strlen(dna_seq);
    Nucliotide *tmp = new Nucliotide[m_length + 1];

    try
    {
        for(size_t i = 0; i < tmp_length; ++i)
        {
            tmp[i] = dna_seq[i];
        }
    }

    catch (SequenceError& e)
    {
        delete[] tmp;
        throw;
    }

    if(m_sequence)
        delete[] m_sequence;
    m_sequence = tmp;
    m_length = tmp_length;
}

void DnaSequence::nucInit(const DnaSequence& dna_seq)
{

    size_t tmp_length = dna_seq.m_length;
    Nucliotide *tmp = new Nucliotide[dna_seq.m_length];

    for(size_t i = 0; i < tmp_length; ++i)
    {
        tmp[i] = dna_seq.m_sequence[i];
    }

    if(m_sequence)
        delete[] m_sequence;
    m_sequence = tmp;
    m_length = tmp_length;
}

DnaSequence::DnaSequence(const char *dna_seq): m_sequence(NULL), m_length(0)
{
    init(dna_seq);
}

DnaSequence::DnaSequence(const std::string& dna_seq): m_sequence(NULL), m_length(0)
{
    init(dna_seq.c_str());
}

DnaSequence::DnaSequence(const DnaSequence& dna_seq): m_sequence(NULL), m_length(0)
{
    nucInit(dna_seq);
}

const DnaSequence& DnaSequence::operator= (const DnaSequence &dna_seq)
{
    if (*this != dna_seq)
    {
        nucInit(dna_seq);
    }
    return *this;
}

const DnaSequence& DnaSequence::operator= (const char* dna_seq)
{


    init(dna_seq);
    return *this;
}

const DnaSequence& DnaSequence::operator= (const std::string &dna_seq)
{
    *this = dna_seq.c_str();
    return *this;
}


DnaSequence DnaSequence::getSlicedSeq (size_t strt_ind, size_t end_ind) const
{
    if (strt_ind < 0 || end_ind > getLength() || strt_ind > end_ind)
        throw std::out_of_range("The index is out of range");

    std::string str;

    for (size_t i = strt_ind; i < end_ind; ++i)
        str.push_back(m_sequence[i]);

    DnaSequence new_dna = (str);

    return new_dna;
}

DnaSequence DnaSequence::getPairs() const
{
    std::string str;

    for (size_t i = 0; i < getLength(); ++i)
        str.push_back(m_sequence[i].getPair());

    DnaSequence new_dna = (str);

    return new_dna;
}

size_t DnaSequence::findSubSeq (const DnaSequence& sub_seq_dna, size_t start) const
{

    size_t i;
    std::string str1, str2;
    for (i = start; i < getLength(); ++i)
        str1.push_back(m_sequence[i]);

    for (i = 0; i < sub_seq_dna.getLength(); ++i)
        str2.push_back(sub_seq_dna.m_sequence[i]);

    size_t found = str1.find(str2);

    if (found != std::string::npos)
        return found + start;

    else return std::string::npos;
}

size_t DnaSequence::countSubSeq (const DnaSequence& sub_seq_dna) const
{
    size_t count = 0;

    for (size_t i = 0; i < getLength();)
    {
        i = findSubSeq (sub_seq_dna, i);

        if (i++ != std::string::npos)
            ++count;

        else return count;
    }

    return count;
}

std::vector<size_t> DnaSequence::findAllSubSeq (const DnaSequence& sub_seq_dna) const
{
    std::vector<size_t> accurs;

    for (size_t i = 0; i < getLength();)
    {
        i = findSubSeq (sub_seq_dna, i);

        if (i != std::string::npos)
        {
            accurs.push_back(i);
            ++i;
        }
    }

    return accurs;
}

std::vector<DnaSequence> DnaSequence::findConsensusSequence () const
{
    std::string start_codon("ATG");
    std::vector<std::string> end_codon;
    end_codon.push_back("TAG");
    end_codon.push_back("TAA");
    end_codon.push_back("TGA");
    std::vector<DnaSequence> consensus_sequence;
    size_t found_start, found_end;

    for (found_start = 0; found_start < getLength() - 3;)
    {
        found_start = findSubSeq (start_codon, found_start);

        if (found_start != std::string::npos)
        {
            for (size_t k = 0; k < 3; ++k)
            {

                for (found_end = found_start + 3; found_end < getLength() - 2; ++found_end)
                {
                    found_end = findSubSeq (end_codon[k], found_end);

                    if (found_end != std::string::npos)
                    {

                        if ((found_end - found_start) % 3 == 0)
                            consensus_sequence.push_back(getSlicedSeq(found_start, found_end + 3));

                    }

                    else break;
                }
            }

            found_start += 3;
        }

        else break;
    }

    return consensus_sequence;
}


