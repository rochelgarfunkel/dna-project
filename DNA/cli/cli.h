#ifndef __CLI_H__
#define __CLI_H__

class CLI: public ICLI
{
public:
    std::string readInput() const;
    void writeOutput(std::ostream& output) const;
};

#endif