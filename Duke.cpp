#ifndef PLAYER_H
#define PLAYER_H
#include "headers/Player.hpp"
#endif

#include "headers/Duke.hpp"

/* Give the duke 3 coins (unblockable) */
void coup::Duke::take_three()
{
    this->n_coins += 3;
}

/* Block a player that used (or will use) foreign aid */
void coup::Duke::block(Player &player)
{
    // at the moment only when someone used
    if (player.last_move_type == took_foreign_aid)
    {
        player.n_coins -= 2;
    }
}