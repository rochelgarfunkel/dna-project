#ifndef __DNA_OBJECT_H__
#define __DNA_OBJECT_H__

#include "dna_sequence.h"
#include "../../helper_structures/shared_ptr.h"

class DNAObject
{
public:
    DNAObject(size_t id, std::string& name, IDna* sequence);
    size_t getId() const;
    std::string getName() const;
    std::string prepareOutput() const;

private:
    size_t m_id;
    std::string m_name;
    SharedPtr<IDna> m_sequence;
};


#endif
