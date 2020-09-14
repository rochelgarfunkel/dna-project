#ifndef __IUI_H__
#define __IUI_H__

#include <vector>
#include <string>

class IParser;

class IUI
{
public:
    virtual ~IUI() {}
    virtual void run(IParser* parser) const = 0;
    virtual void writeOutput(const std::string& output) const = 0;

private:
    virtual std::string readCommand() const = 0;
    virtual void handleCommand(std::vector<std::string>& command) const = 0;
};

#endif