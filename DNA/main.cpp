#include "data_base/input_output_handler/text_handler.h"
#include "ui/cli.h"
#include "parser/cli_parser.h"
#include "manager.h"

int main()
{
    IUI* ui = new CLI;
    IParser* parser = new CLIParser();
    IOHandler* io_handler = new TextHandler("dna_sequences");
    Manager* manager = new Manager(ui, parser, io_handler);
    manager->run();

}