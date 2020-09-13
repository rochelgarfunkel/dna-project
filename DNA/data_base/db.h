#ifndef __DB_H__
#define __DB_H__

#include <stddef>
#include <list>
#include <map>
#include "dna/dna_object.h"

class IOHandler;

class DB
{
public:
    DB(IOHandler* m_handler);
    IOHandler* m_handler;
    DNAObject& getById(const size_t id) const;
    DNAObject& getByName(const std::string& name) const;
    void addDna(DNAObject& dna);

private:
    std::list<DNAObject> m_dnas;
    std::map<size_t, DNAObject*> m_id_map;
    std::map<std::string, DNAObject*> m_name_map;
};

#endif