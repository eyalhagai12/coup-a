#include "Assassin.hpp"

void coup::Assassin::coup(coup::Player &player)
{
    if (this->n_coins >= assassin_price && this->n_coins < coup_price)
    {
        this->n_coins -= assassin_price;
        this->last_killed = &player;
        this->game.end_turn();
        player.die();
    }
    else if (this->n_coins >= coup_price)
    {
        this->n_coins -= assassin_price;
        this->last_killed = &player;
        this->game.end_turn();
        player.die();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}