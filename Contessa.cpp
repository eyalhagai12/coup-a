#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H
#include "headers/Player.hpp"
#endif

#include "headers/Contessa.hpp"

void coup::Contessa::block_kill(coup::Player &player)
{
    if (!player.in_game)
    {
        player.revive();
    }
}