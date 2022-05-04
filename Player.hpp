#pragma once
#include "Game.hpp"

// define game parameters
#define inc 1
#define aid 2
#define coup_price 7

// player class
class coup::Player
{
protected:
    int n_coins;
    int idx;
    std::string name;
    std::string role_name;
    bool in_game;
    coup::Game &game;
    std::vector<std::string> blocking_roles;

public:
    // methods
    Player(coup::Game &game, std::string player_name, std::string role_name = "Player") : name(player_name),
                                                                                          n_coins(0),
                                                                                          in_game(true),
                                                                                          game(game),
                                                                                          role_name(role_name),
                                                                                          blocking_roles(std::vector<std::string>()),
                                                                                          idx(0) {} // end of constructor

    void income();                     // get income
    void foreign_aid();                // get foreign aid
    virtual void coup(Player &player); // coup
    void die();                        // die in game
    void revive();                     // come back to game (a specific case)
    int coins();                       // return amount of coins
    std::string role();                // return role name
    bool is_alive();                   // check if player is still alive
    void print_player_info();          // print the info of the player
    ~Player() {}

    // friend classes
    friend class Duke;
    friend class Assassin;
    friend class Ambassador;
    friend class Captain;
    friend class Contessa;
    friend class Game;
};