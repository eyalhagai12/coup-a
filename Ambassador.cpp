#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H
#include "headers/Player.hpp"
#endif

#include "headers/Ambassador.hpp"

void coup::Ambassador::move_coins(coup::Player &from, coup::Player &to)
{
    if (from.n_coins > 0)
    {
        from.n_coins -= 1;
        to.n_coins += 1;
    }
}

void coup::Ambassador::block_steal(coup::Player &from, coup::Player &to)
{
    from.n_coins += 2;
    to.n_coins -= 2;
}