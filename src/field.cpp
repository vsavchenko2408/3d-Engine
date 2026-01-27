#include "../include/field.h"

    Field::Field(): _map(_HEIGHT, std::vector<char>(_WIDTH))
    {
        for(int y = 0; y < _HEIGHT; y++)
        {
            for(int x = 0; x < _WIDTH; x++)
            {
                if(y == 0 || x == 0 || y == (_WIDTH-1) || x == (_HEIGHT-1))
                {
                    _map[x][y] = '#';
                }
                else
                {
                    _map[x][y] = ' ';
                }
            }
        }
    }


    void Field::show_map(Player& p)
    {
        for(int y = 0; y < _HEIGHT; y++)
        {
            for(int x = 0; x < _WIDTH; x++)
            {
                if(p.get_x() == x && p.get_y() == y)
                {
                    std::cout << 'P';
                }
                else
                {
                std::cout << _map[x][y];
                }
            }
            std::cout << "\n";
        }
        
    }