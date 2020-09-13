#ifndef __ICLI_H__
#define __ICLI_H__

class ICLI:
{
public:
    virtual std::string readCommand() = 0;
    virtual void writeOutput(std::ostream& output) = 0;
};

#endif