#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

class coup::Duke : public coup::Player
{
public:
    Duke(coup::Game game, std::string player_name) : Player(game, player_name, "Duke") {}
    void take_three();
    void block(Player &player);
    ~Duke() {}
};
