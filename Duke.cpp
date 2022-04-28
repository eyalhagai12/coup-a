#include "Duke.hpp"

void coup::Duke::tax()
{
    if (this->game.turn() == this->name)
    {
        this->n_coins += 3;
        this->game.end_turn();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}

void coup::Duke::block(coup::Player &player)
{
    player.n_coins -= 2;
    // this->game.end_turn();
}