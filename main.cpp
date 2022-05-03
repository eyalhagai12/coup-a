#include "Duke.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;
using namespace std;

void print_key(std::unordered_map<std::string, std::vector<coup::Player *>> blockable_dict, string key)
{

    cout << "--------------------- Blockable Players: ---------------------" << endl;
    for (Player *player : blockable_dict.at(key))
    {
        player->print_player_info();
    }
    cout << "--------------------------------------------------------------" << endl;
}

int main(int argc, char const *argv[])
{
    Game game;
    Duke duke{game, "Eyal"};
    Assassin assassin{game, "Tal"};
    Contessa contessa{game, "Guy"};
    Ambassador ambassador{game, "Ohad"};
    Captain captain{game, "Nir"};

    for (size_t i = 0; i < 3; i++)
    {
        /* code */

        cout << "-------------------------------------" << endl;
        cout << "-------------- "
             << "Round " << i + 1 << " --------------" << endl;
        cout << "-------------------------------------" << endl;
        // cout << "It's " << game.turn() << "'s turn" << endl;
        duke.income();
        // duke.print_player_info();
        // cout << "It's " << game.turn() << "'s turn" << endl;
        assassin.foreign_aid();
        // assassin.print_player_info();
        // cout << "It's " << game.turn() << "'s turn" << endl;
        contessa.foreign_aid();
        // contessa.print_player_info();
        // cout << "It's " << game.turn() << "'s turn" << endl;
        ambassador.income();
        // ambassador.print_player_info();
        // cout << "It's " << game.turn() << "'s turn" << endl;
        captain.foreign_aid();
        // captain.print_player_info();
        cout << endl
             << endl;
    }

    print_key(game.blockable_dict, "Duke");
    return 0;
}
