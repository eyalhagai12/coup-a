#include <iostream>
#include <vector>
#include <unordered_map>

namespace coup
{
    // declare the names of the classes in the namespace
    class Game;
    class Player;
    class Duke;
    class Assassin;
    class Ambassador;
    class Captain;
    class Contessa;
} // namespace coup

class coup::Game
{
private:
    std::vector<coup::Player> player_list;
    size_t current_player;
    std::unordered_map<std::string, std::vector<coup::Player>> roles;

public:
    Game() : current_player(0) {}
    void add_player(coup::Player &player);
    void print_players();
    std::vector<std::string> players();
    std::string turn();
    std::string winner();
    void end_turn() { this->current_player = (this->current_player + 1) % this->player_list.size(); }
    ~Game() {}
};
