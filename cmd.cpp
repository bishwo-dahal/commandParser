#include <iostream>
#include "commandParser.h"

void display(std::vector<std::string> data)
{
    for (auto d : data)
    {
        std::cout << d;
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    commandParser cmd = commandParser(argc, argv, true);

    display(cmd.getCommands());

    std::cout << cmd[0];
    cin.get();
    std::cout << std::endl;
    return 0;
}