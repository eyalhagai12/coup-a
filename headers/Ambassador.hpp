#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

class coup::Ambassador : public coup::Player
{
public:
    Ambassador(coup::Game game, std::string player_name) : Player(game, player_name, "Ambassador") {}
    void move_coins(coup::Player &from, coup::Player &to);
    void block_steal(coup::Player &from, coup::Player &to);
    ~Ambassador() {}
};
