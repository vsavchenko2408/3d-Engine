#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include <iostream>

class Field
{
    const int _WIDTH = 16;
    const int _HEIGHT = 16;
    std::vector<std::vector<char>> _map;

    public:
    Field();
    
    void show_map();
};

#endif