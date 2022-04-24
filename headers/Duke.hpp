#include "headers/Player.hpp"

class coup::Duke : public coup::Player
{
public:
    Duke(coup::Game game, std::string player_name) : Player(game, player_name) {}
    void take_three();
    void block(Player &player);
    ~Duke();
};
