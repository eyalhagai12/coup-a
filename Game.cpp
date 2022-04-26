#include <iostream>
#include "headers/Player.hpp"

std::vector<std::string> coup::Game::players()
{
    std::vector<std::string> names;
    for (coup::Player &player : this->player_list)
    {
        names.push_back(player.name);
    }

    return names;
}

std::string coup::Game::turn()
{
    return this->player_list.at(this->current_player).name;
}

void coup::Game::add_player(coup::Player &player)
{
    this->roles.at(player.role_name).push_back(player);
    this->player_list.push_back(player);
}