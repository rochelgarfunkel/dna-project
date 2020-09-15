#ifndef __DB_H__
#define __DB_H__

#include <cstddef>
#include <list>
#include <map>
#include "./../helper_structures/shared_ptr.h"
#include "dna/dna_object.h"


class DB
{
public:
    DB();
    DNAObject getById(size_t id) const;
    DNAObject getByName(const std::string& name) const;
    bool nameExists(const std::string& name) const;
    void addDna(DNAObject& dna);

private:
    std::list<DNAObject> m_dnas;
    std::map<size_t, SharedPtr<DNAObject>> m_id_map;
    std::map<std::string, SharedPtr<DNAObject>> m_name_map;
    size_t m_dna_id;
};

#endif