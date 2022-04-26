#include "headers/Duke.hpp"
#include "headers/Ambassador.hpp"
#include "headers/Assassin.hpp"
#include "headers/Captain.hpp"
#include "headers/Contessa.hpp"

using namespace coup;

int main(int argc, char const *argv[])
{
    Game game;
    Duke duke {game, "Eyal"};
    Assassin assassin {game, "Tal"};

    return 0;
}
