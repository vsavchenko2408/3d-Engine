#include "../include/field.h"

    Field::Field(): _map(_HEIGHT, std::vector<char>(_WIDTH))
    {
        for(int y = 0; y < _HEIGHT; y++)
        {
            for(int x = 0; x < _WIDTH; x++)
            {
                if(y == 0 || x == 0 || y == (_HEIGHT-1) || x == (_WIDTH-1))
                {
                    _map[y][x] = '#';
                }
                else
                {
                    _map[y][x] = ' ';
                }
            }
        }
    }


    void Field::show_map(Player& p) const
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
                std::cout << _map[y][x];
                }
            }
            std::cout << "\n";
        }
        
    }

        bool Field::is_wall(int x, int y) const
        {
            if(x<0 || y < 0 || x>= _WIDTH || y >= _HEIGHT)
            {
                return true;
            }
            return _map[y][x] == '#';
        }