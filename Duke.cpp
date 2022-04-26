#include "headers/Duke.hpp"

void coup::Duke::tax()
{
    this->n_coins += 3;
}

void coup::Duke::block(coup::Player &player)
{
    if (player.n_coins < 2)
    {
        std::cout << "Duke Block Exception!\n";
    }
    player.n_coins -= 2;
}