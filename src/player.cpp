#include "../include/player.h"
#include "../include/field.h"

Player::Player() :_x(5), _y(5)
{

}

int Player::get_x() const
{
    return _x;
}

int Player::get_y() const
{
    return _y;
}

void Player::try_move(int dx, int dy, const Field& f)
{
    int nx = _x+dx;
    int ny = _y+dy;
    if(!f.is_wall(nx, ny))
    {
        _x = nx;
        _y = ny;
    }
}