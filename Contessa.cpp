#include "headers/Contessa.hpp"

void coup::Contessa::block(coup::Player &player)
{
    if (!player.in_game)
    {
        player.revive();
    }
}