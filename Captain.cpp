#include "headers/Captain.hpp"

void coup::Captain::steal(coup::Player &player)
{
    if (player.n_coins >= 2)
    {
        player.n_coins -= 2;
    }
}
void coup::Captain::block(coup::Player &player)
{
    player.n_coins -= 2;
    this->n_coins += 2;
}