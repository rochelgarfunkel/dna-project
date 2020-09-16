#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "idna.h"


class Decorator: public IDna
{
public:
    Decorator(IDna* idna);
    ~Decorator() {}

    virtual IDna* execute(IDna* idna);

protected:
    IDna* m_idna;
};

inline Decorator::Decorator(IDna *idna): m_idna(idna)
{}

#endif