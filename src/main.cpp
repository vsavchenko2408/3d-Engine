#include <iostream>
#include <cmath>
#include "../include/field.h"

float cast_ray(Field& f, const Player& p);


int main()
{
    Field f;
    Player p;
    while(true)
    {
        #ifdef WIN32
        system("cls");
        #endif
        #ifdef linux
        system("clear");
        #endif
        f.show_map(p);
        std::cout << "dist forward: " << cast_ray(f, p) << "\n";
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
            case 'j': p.turn(-0.1f);
            break;
            case 'l': p.turn( 0.1f);
            break;
            case 'q': exit(0);
            default:
            break;
        }
    }
}



float cast_ray(Field& f, const Player& p)
{
    float ox = p.get_x() + 0.5f;
    float oy = p.get_y() + 0.5f;

    float step = 0.05f;
    float dist = 0.0f;
    float maxDist = 16.0f;

    while (dist < maxDist)
    {
        dist += step;
        float tx = ox + std::cos(p.get_angle()) * dist;
        float ty = oy + std::sin(p.get_angle()) * dist;

        if (f.is_wall((int)tx, (int)ty))
            return dist;
    }
    return maxDist;
}