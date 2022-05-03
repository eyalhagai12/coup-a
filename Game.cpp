#include <iostream>
#include "Player.hpp"

std::vector<std::string> coup::Game::players()
{
    std::vector<std::string> names;
    for (coup::Player &player : this->player_list)
    {
        if (player.is_alive())
        {
            names.push_back(player.name);
        }
    }

    return names;
}

std::string coup::Game::turn()
{
    return this->player_list.at(this->current_player).name;
}

void coup::Game::add_player(coup::Player &player)
{
    player.idx = this->player_list.size();
    this->player_list.push_back(player);
}

void coup::Game::end_turn()
{
    // get next player that is in game
    this->current_player = (this->current_player + 1) % this->player_list.size();

    while (!this->player_list.at(this->current_player).in_game)
    {
        this->current_player = (this->current_player + 1) % this->player_list.size();
    }
}

void coup::Game::add_blockable(coup::Player *player, std::string blocking_role)
{
    this->blockable_dict.at(blocking_role).push_back(player);
}