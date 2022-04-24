#include <iostream>

namespace coup
{
// define coup price
#define coup_price 7

// define some constants
#define start_of_game -1
#define took_income 1
#define took_foreign_aid 2
#define couped 3
#define spaciel_move 4

    // declare the names of the classes in the namespace
    class Game;
    class Player;
    class Duke;
    class Assassin;
    class Ambassador;
    class Captain;
    class Contessa;
} // namespace coup

class coup::Player
{
protected:
    unsigned int coins;
    std::string name;
    bool in_game;
    coup::Game game;
    unsigned int last_move_type;

public:
    // methods
    Player(coup::Game game, std::string player_name) 
    : name(player_name), coins(0), in_game(true), game(game), last_move_type(start_of_game) {} // constructor

    void income() { coins += 1; }
    void foreign_aid() { coins += 2; }
    virtual void coup(Player &player);
    void die();
    void revive();
    ~Player();

    // friend classes
    friend class Duke;
    friend class Assassin;
    friend class Ambassador;
    friend class Captain;
    friend class Contessa;
};