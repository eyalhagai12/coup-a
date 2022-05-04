#include <iostream>
#include "Player.hpp"

void coup::Game::remove_blockable_player()
{
    coup::Player &player = this->player_list.at(this->current_player);

    for (auto &pair : this->blockable_dict)
    {
        std::vector<coup::Player *> &players_by_role = this->blockable_dict.at(pair.first);
        long i = 0;
        for (coup::Player *p_player : players_by_role)
        {
            if (p_player->name == player.name)
            {
                players_by_role.erase(players_by_role.begin() + i);
            }
            i++;
        }
    }
}

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

    this->remove_blockable_player();
}

void coup::Game::add_blockable(coup::Player *player, std::string blocking_role)
{
    this->blockable_dict.at(blocking_role).push_back(player);
}

bool coup::Game::can_block(coup::Player &player_to_block, std::string my_role)
{
    std::vector<coup::Player *> &potential_players = this->blockable_dict.at(my_role);
    long i = 0;
    for (const coup::Player *player : potential_players)
    {
        if (player->name == player_to_block.name)
        {
            potential_players.erase(potential_players.begin() + i);
            return true;
        }
        i++;
    }

    return false;
}