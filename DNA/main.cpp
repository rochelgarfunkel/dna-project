#include <iostream>
#include "ui/cli.h"
#include "manager.h"

int main()
{
    IUI* ui = new CLI;
    Manager* manager = new Manager(ui);
    manager->run();
}