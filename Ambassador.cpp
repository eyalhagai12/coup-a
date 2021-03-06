#include "Ambassador.hpp"

#ifndef CAP_H
#define CAP_H
#include "Captain.hpp"
#endif

void coup::Ambassador::transfer(coup::Player &from, coup::Player &to)
{
    if (from.n_coins < 0)
    {
        from.n_coins -= 1;
        to.n_coins += 1;
        this->game.end_turn();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}
void coup::Ambassador::block(coup::Player &player)
{
    player.n_coins -= captain_steals;
    this->n_coins += captain_steals;
    // this->game.end_turn();
}