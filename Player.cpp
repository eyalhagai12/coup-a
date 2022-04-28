#include <iostream>

#include "Player.hpp"

void coup::Player::coup(Player &player)
{
    if (this->n_coins >= coup_price)
    {
        this->n_coins -= coup_price;
        player.die();
    }
}

void coup::Player::die()
{
    this->in_game = false;
}

void coup::Player::revive()
{
    this->in_game = true;
}