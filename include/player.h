#ifndef PLAYER_H
#define PLAYER_H

class Field;
class Player
{
    int _x;
    int _y;
    public:
    Player();
    int get_x() const;
    int get_y() const;
    void try_move(int dx, int dy, const Field& f);
};

#endif