#include <iostream>

#include "headers/Assassin.hpp"
#include "headers/Player.hpp"

void coup::Assassin::coup(coup::Player& player)
{
    if (this->coins >= this->assassin_price)
    {
        player.die();
    }
}
