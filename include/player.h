#ifndef PLAYER_H
#define PLAYER_H

class Field;
class Player
{
    int _x;
    int _y;
    float _angle;
    public:
    Player();
    int get_x() const;
    int get_y() const;
    float get_angle() const;
    void turn(float da);
    void try_move(int dx, int dy, const Field& f);
};

#endif