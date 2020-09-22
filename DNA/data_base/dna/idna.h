#ifndef __IDNA_H__
#define __IDNA_H__

class Nucliotide;

class IDna
{
public:
    virtual ~IDna() {}
    virtual const char operator[] (size_t i) const = 0;
    virtual Nucliotide& operator[] (size_t i) = 0;
};


#endif