#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include <iostream>

class Field
{
    const int _WIDTH = 16;
    const int _HEIGHT = 16;
    std::vector<std::vector<int>> _map;

    public:
    Field(): _map(_HEIGHT, std::vector<int>(_WIDTH))
    {
        for(int y = 0; y < _HEIGHT; y++)
        {
            for(int x = 0; x < _WIDTH; x++)
            {
                if(y == 0 || x == 0 || y == (_WIDTH-1) || x == (_HEIGHT-1))
                {
                    _map[x][y] = 1;
                }
                else
                {
                    _map[x][y] = 0;
                }
            }
        }
    }
    void show_map()
    {
        for(int y = 0; y < _HEIGHT; y++)
        {
            for(int x = 0; x < _WIDTH; x++)
            {
                std::cout << _map[x][y];
            }
            std::cout << "\n";
        }
        
    }
};

#endif