#include "Assassin.hpp"

void coup::Assassin::coup(coup::Player &player)
{
    if (this->n_coins >= assassin_price)
    {
        this->n_coins -= assassin_price;
        this->last_killed = &player;
        player.die();
    }
    this->vulnerable = true;
    this->game.end_turn();
}