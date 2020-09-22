#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include <string>

#include "../../../helper_structures/shared_ptr.h"
#include "../idna.h"

class Decorator: public IDna
{
public:
    Decorator(IDna* idna);
    ~Decorator() {}

protected:
    SharedPtr<IDna> m_idna;
};

inline Decorator::Decorator(IDna* idna): m_idna(SharedPtr<IDna> (idna))
{}

#endif