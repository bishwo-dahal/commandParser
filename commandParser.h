#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::endl, std::cout, std::cin;

class commandParser
{
    std::vector<std::string> commands;

public:
    commandParser(int argc, char **argv, bool ignoreFirst = false);
    void display();
    std::vector<std::string> getArgs();
    std::vector<std::string> getCommands();
    bool contains(std::string);
    bool hasArg(std::string);
    std::string at(size_t point);
    std::string operator[](int index);
};

#endif