#include "data_base/input_output_handler/text_handler.h"
#include "ui/cli.h"
#include "manager.h"

int main()
{
    IUI* ui = new CLI;
    IOHandler* io_handler = new TextHandler("dna_sequences");
    Manager* manager = new Manager(ui, io_handler);
    manager->run();

}