#include <iostream>
#include "headers/Player.hpp"

void coup::Game::add_player(coup::Player &player)
{
    this->players.push_back(player);
}

void coup::Game::print_players()
{
    for (size_t i = 0; i < this->players.size(); ++i)
    {
        this->players.at(i).role();
    }
}