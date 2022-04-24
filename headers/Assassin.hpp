#ifndef PLAYER_H
#define PLAYER_H
#include "Player.hpp"
#endif

class coup::Assassin : public coup::Player
{
private:
    coup::Player *last_killed;
    static const unsigned int assassin_price = 3;

public:
    Assassin(coup::Game game, std::string player_name) : Player(game, player_name, "Assassin"), last_killed(nullptr) {}
    void assassin_kill(coup::Player &player);
    ~Assassin() {}
};
