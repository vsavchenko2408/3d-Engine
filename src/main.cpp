#include <iostream>
#include "../include/field.h"

int main()
{
    Field f;
    Player p;
    while(true)
    {
        #ifdef win32
        system("cls");
        #endif
        #ifdef linux
        system("clear");
        #endif
        f.show_map(p);
        std::cout << "WASD move, Q to quit:";
        char c;
        std::cin >> c;

        switch(c)
        {
            case 'a': p.try_move(-1,0, f);
            break;
            case 'w': p.try_move(0,-1,f);
            break;
            case 's': p.try_move(0,1, f);
            break;
            case 'd': p.try_move(1,0,f);
            break;
            case 'q': exit(0);
            default:
            break;
        }
    }
}