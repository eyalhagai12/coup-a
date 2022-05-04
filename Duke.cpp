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
    if (this->game.can_block(player, "Duke"))
    {
        std::cout << "Duke Block Successfull!" << std::endl;
        player.n_coins -= aid;
    }
    else
    {
        std::cout << "You Cant Block This Player!" << std::endl;
    }
}