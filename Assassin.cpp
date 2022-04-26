#include "headers/Assassin.hpp"

void coup::Assassin::coup(coup::Player &player)
{
    if (this->n_coins >= assassin_price)
    {
        this->n_coins -= assassin_price;
        player.die();
    }
}