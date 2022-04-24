#include <iostream>

#include "headers/Player.hpp"

void coup::Player::coup(Player &player)
{
    if (this->coins >= coup_price)
    {
        this->coins -= coup_price;
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