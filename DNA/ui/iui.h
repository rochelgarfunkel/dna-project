#ifndef __IUI_H__
#define __IUI_H__

#include <vector>
#include <string>

class DB;

class IUI
{
public:
    virtual ~IUI() {}
    virtual void run(std::string(*call_back)(std::vector<std::string>&, DB*), DB* db) const = 0;
    virtual void writeOutput(const std::string& output) const = 0;

private:
    virtual std::string readCommand() const = 0;
};

#endif