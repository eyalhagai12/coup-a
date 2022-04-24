#include <iostream>
#include <vector>
#include "Namespace.hpp"

class coup::Game
{
private:
    std::vector<coup::Player> players;

public:
    Game() {}
    void add_player(coup::Player &player);
    void print_players();
    ~Game() {}
};
