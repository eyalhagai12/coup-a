#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

#define captain_steals 2

class coup::Captain : public coup::Player
{
public:
    Captain(coup::Game game, std::string player_name) : Player(game, player_name, "Captain") {}
    void steal(coup::Player &player);
    void block(coup::Player &player);
    ~Captain() {}
};
