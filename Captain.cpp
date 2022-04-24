#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H
#include "headers/Player.hpp"
#endif

#include "headers/Captain.hpp"

void coup::Captain::steal_two(coup::Player &player)
{
    if (player.n_coins > 1)
    {
        player.n_coins -= 2;
        this->n_coins += 2;
    }
}

void coup::Captain::block_steal(coup::Player &from, coup::Player &to)
{
    from.n_coins += 2;
    to.n_coins -= 2;
}