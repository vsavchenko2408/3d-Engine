#include "../include/player.h"
#include "../include/field.h"

Player::Player() :_x(5), _y(5), _angle(0.0f)
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

float Player::get_angle() const
{
    return _angle;
}

void Player::turn(float da)
{
    _angle += da;
    const float twoPi = 6.2831f;
    while(_angle < 0) _angle += twoPi;
    while(_angle >= twoPi) _angle -=twoPi;
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