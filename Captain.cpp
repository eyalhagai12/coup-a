#include "headers/Captain.hpp"

void coup::Captain::steal(coup::Player &player)
{
    if (player.n_coins >= captain_steals)
    {
        player.n_coins -= captain_steals;
        this->n_coins += captain_steals;
    }
}
void coup::Captain::block(coup::Player &player)
{
    player.n_coins -= 2;
    this->n_coins += 2;
}