#include "commandParser.h"

commandParser::commandParser(int argc, char **argv, bool ignoreFirst)
{
    for (int cnt = 0; cnt < argc; cnt++)
    {
        commands.push_back(argv[cnt]);
    }
    if (ignoreFirst == true)
    {
        commands.erase(commands.begin());
    }
    display();
}

void commandParser::display()
{
    for (auto command : commands)
    {
        std::cout << command << " ";
    }
    std::cout << std::endl;
}

std::vector<std::string> commandParser::getCommands()
{
    return commands;
}

std::vector<std::string> commandParser::getArgs()
{
    std::vector<std::string> result;
    for (auto command : commands)
    {
        if (command[0] == '-')
        {
            result.push_back(command);
        }
    }
    return result;
}

bool commandParser::contains(std::string data)
{
    std::vector<std::string>::iterator found = std::find(commands.begin(), commands.end(), data);
    if (found != commands.end())
    {
        return true;
    }
    return false;
}
bool commandParser::hasArg(std::string data)
{
    data = "-" + data;
    if (contains(data))
    {
        return true;
    }
    return false;
}
std::string commandParser::at(size_t point)
{
    return commands.at(point);
}
std::string commandParser::operator[](int index)
{
    return commands[index];
}