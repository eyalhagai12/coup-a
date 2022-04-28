#include "Duke.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;
using namespace std;

int main(int argc, char const *argv[])
{
    Game game;
    Duke duke{game, "Eyal"};
    Assassin assassin{game, "Tal"};
    Contessa contessa{game, "name"};


    cout << game.turn() << endl;
    duke.income();
    cout << game.turn() << endl;
    assassin.foreign_aid();
    cout << game.turn() << endl;
    duke.foreign_aid();
    contessa.foreign_aid();
    cout << game.turn() << endl;

    return 0;
}
