#ifndef __CLI_H__
#define __CLI_H__

#include "iui.h"

class CLI: public IUI
{
public:
    ~CLI() {}
    void run(IParser* parser) const;
    void writeOutput(const std::string& output) const;

private:
    std::string readCommand() const;
    void handleCommand(std::vector<std::string>& command) const;
};

#endif