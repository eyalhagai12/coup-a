#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

class coup::Captain : coup::Player
{
private:
    coup::Player *last_stole_from;

public:
    Captain(coup::Game game, std::string player_name) : Player(game, player_name, "Captain"), last_stole_from(nullptr) {}
    void steal_two(coup::Player &player);
    void block_steal(coup::Player &from, coup::Player &to);
    ~Captain() {}
};
