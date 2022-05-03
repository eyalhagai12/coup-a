#include "Captain.hpp"

void coup::Captain::steal(coup::Player &player)
{
    if (player.n_coins >= captain_steals)
    {
        player.n_coins -= captain_steals;
        this->n_coins += captain_steals;
        this->game.end_turn();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}
void coup::Captain::block(coup::Player &player)
{
    player.n_coins -= 2;
    this->n_coins += 2;
    this->game.end_turn();
}