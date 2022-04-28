#include <iostream>

#include "Player.hpp"

// get income
void coup::Player::income()
{
    if (this->game.turn() == this->name)
    {
        this->n_coins += inc;
        this->game.end_turn();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}

// get foreign aid
void coup::Player::foreign_aid()
{
    if (this->game.turn() == this->name)
    {
        this->n_coins += aid;
        this->vulnerable = true;
        this->game.end_turn();
    }
    else
    {
        std::cout << "Not your turn!" << std::endl;
    }
}

// coup
void coup::Player::coup(Player &player)
{
    if (this->n_coins >= coup_price)
    {
        this->n_coins -= coup_price;
        player.die();
        this->game.end_turn();
    }
}

// get number of coins
int coup::Player::coins() { return this->n_coins; }

// get the role of the player
std::string coup::Player::role() { return this->role_name; }

// check if the player is alive
bool coup::Player::is_alive() { return in_game; }

// die
void coup::Player::die()
{
    this->in_game = false;
}

// revive
void coup::Player::revive()
{
    this->in_game = true;
}