#include <iostream>

#include "headers/Player.hpp"

class coup::Assassin : public coup::Player
{
private:
    player *last_killed;
    static const unsigned int assassin_price = 3;
public:
    Assassin(coup::Game game, std::string player_name) : Player(game, player_name), last_killed(nullptr);
    virtual void coup(coup::Player& player);
    ~Assassin();
};
