#include "Duke.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

int main(int argc, char const *argv[])
{
    Game game;
    Duke duke{game, "Eyal"};
    Assassin assassin{game, "Tal"};
    Contessa contessa{game, "name"};

    duke.income();
    assassin.foreign_aid();

    return 0;
}
