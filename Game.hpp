#pragma once
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
    std::unordered_map<std::string, std::vector<coup::Player *>> roles;

public:
    Game() : current_player(0)
    {
        std::vector<std::string> role_list = {"Duke", "Assassin", "Ambassador", "Captain", "Contessa"};

        for (std::string role : role_list)
        {
            std::pair<std::string, std::vector<coup::Player *>> kv_pair = {role, std::vector<coup::Player *>()};
            roles.insert(kv_pair);
        }
    }
    void add_player(coup::Player &player);
    void print_players();
    std::vector<std::string> players();
    std::string turn();
    std::string winner();
    void end_turn();
    ~Game() {}
};
