#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

class coup::Contessa : public coup::Player
{
public:
    Contessa(coup::Game game, std::string player_name) : Player(game, player_name, "Contessa") {}
    void block(coup::Player &player);
    ~Contessa() {}
};
