#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include <iostream>
#include "player.h"

class Field
{
    const int _WIDTH = 16;
    const int _HEIGHT = 16;
    std::vector<std::vector<char>> _map;

    public:
    Field();
    bool is_wall(int x, int y) const;
    void show_map(Player& p);
};

#endif