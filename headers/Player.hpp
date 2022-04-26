#ifndef GAME_H
#define GAME_H
#include "Game.hpp"
#endif

// define game parameters
#define inc 1
#define aid 2
#define coup_price 7

// define some constants
#define start_of_game -1
#define took_income 1
#define took_foreign_aid 2
#define couped 3

// player class
class coup::Player
{
protected:
    int n_coins;
    std::string name;
    std::string role_name;
    bool in_game;
    coup::Game game;
    int last_move_type;

public:
    // methods
    Player(coup::Game game, std::string player_name, std::string role_name = "Player") : name(player_name),
                                                                                         n_coins(0),
                                                                                         in_game(true),
                                                                                         game(game),
                                                                                         last_move_type(start_of_game),
                                                                                         role_name(role_name) {} // end of constructor

    void income() { n_coins += inc; } // get income
    void foreign_aid()
    {
        n_coins += aid;
        this->game.end_turn();
    }                                              // get foreign aid
    virtual void coup(Player &player);             // coup a player
    void die();                                    // die in game
    void revive();                                 // come back to game (a specific case)
    int coins() { return this->n_coins; }          // return amount of coins
    std::string role() { return this->role_name; } // return role name
    ~Player() {}

    // friend classes
    friend class Duke;
    friend class Assassin;
    friend class Ambassador;
    friend class Captain;
    friend class Contessa;
    friend class Game;
};