#include "doctest.h"

#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

TEST_CASE("Good Game!")
{
    // create a new game
    Game game;

    // create players
    Duke duke(game, "eyal");
    Contessa contessa(game, "tal");
    Assassin assassin(game, "itai");
    Ambassador ambassador(game, "suzi");
    Captain captain(game, "alon");

    /* make some moves */
    // round 1
    duke.tax();
    CHECK(duke.coins() == 3);

    contessa.foreign_aid();
    CHECK(contessa.coins() == 2);

    assassin.income();
    CHECK(assassin.coins() == 1);

    ambassador.foreign_aid();
    CHECK(ambassador.coins() == 2);

    captain.foreign_aid();
    CHECK(captain.coins() == 2);

    // round 2
    duke.tax();
    CHECK(duke.coins() == 6);

    contessa.foreign_aid();
    CHECK(contessa.coins() == 4);

    assassin.foreign_aid();
    CHECK(assassin.coins() == 3);

    ambassador.foreign_aid();
    CHECK(ambassador.coins() == 4);

    captain.steal(assassin);
    CHECK(captain.coins() == 4);
    CHECK(assassin.coins() == 1);

    // round 3
    duke.tax();
    CHECK(duke.coins() == 9);

    contessa.foreign_aid();
    CHECK(contessa.coins() == 6);

    assassin.foreign_aid();
    CHECK(assassin.coins() == 3);

    ambassador.foreign_aid();
    CHECK(ambassador.coins() == 6);

    captain.steal(duke);
    CHECK(captain.coins() == 6);
    CHECK(duke.coins() == 7);

    // round 4
    duke.block(ambassador);
    CHECK(ambassador.coins() == 4);

    contessa.foreign_aid();
    CHECK(contessa.coins() == 8);

    assassin.coup(captain);
    CHECK(!captain.is_alive());
    CHECK(assassin.coins() == 0);

    ambassador.foreign_aid();
    CHECK(ambassador.coins() == 6);

    // round 5
    duke.block(contessa);
    CHECK(contessa.coins() == 6);

    contessa.block(assassin);
    CHECK(captain.is_alive());

    assassin.foreign_aid();
    CHECK(assassin.coins() == 2);

    ambassador.foreign_aid();
    CHECK(ambassador.coins() == 8);

    captain.steal(duke);
    CHECK(captain.coins() == 8);
    CHECK(duke.coins() == 5);
}