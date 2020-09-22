#ifndef __DUP_DECORATOR_H__
#define __DUP_DECORATOR_H__

#include "decorator.h"


class DupDecorator: public Decorator
{
public:
    DupDecorator(IDna* idna);

    const char operator[] (size_t i) const;
    Nucliotide& operator[] (size_t i);
};



#endif


