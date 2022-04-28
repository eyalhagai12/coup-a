#include "headers/Assassin.hpp"

void coup::Assassin::coup(coup::Player &player)
{
    if (this->n_coins >= assassin_price)
    {
        this->n_coins -= assassin_price;
        this->last_killed = &player;
        player.die();
    }
}

void coup::Assassin::uncoup()
{
    if (this->last_killed != nullptr)
    {
        this->last_killed->revive();
    }
}