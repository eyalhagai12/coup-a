#ifndef GAME_H
#define GAME_H
#include "Game.hpp"
#endif

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

    void income() { n_coins += 1; }
    void foreign_aid() { n_coins += 2; }
    void coup(Player &player);
    void die();
    void revive();
    int coins() { return this->n_coins; }
    void role() { std::cout << this->name << " - " << this->role_name << "." << std::endl; }
    ~Player() {}

    // friend classes
    friend class Duke;
    friend class Assassin;
    friend class Ambassador;
    friend class Captain;
    friend class Contessa;
};