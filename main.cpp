#include "headers/Duke.hpp"
#include "headers/Ambassador.hpp"
#include "headers/Assassin.hpp"
#include "headers/Captain.hpp"
#include "headers/Contessa.hpp"

using namespace coup;

int main(int argc, char const *argv[])
{
    Game game_1{};
    Duke duke{game_1, "Eyal"};
    Ambassador amb{game_1, "Tal"};
    game_1.add_player(duke);
    game_1.add_player(amb);
    game_1.print_players();
    return 0;
}
