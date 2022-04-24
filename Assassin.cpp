#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H
#include "headers/Player.hpp"
#endif

#include "headers/Assassin.hpp"

void coup::Assassin::assassin_kill(coup::Player& player)
{
    if (this->n_coins >= this->assassin_price)
    {
        player.die();
    }
}
