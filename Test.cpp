#include "doctest.h"

#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace coup;

TEST_CASE("tests")
{
    Game game_1{};

    Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};

    CHECK_EQ(duke.coins(),"0");
    CHECK_EQ(assassin.coins(),"0");
    CHECK_EQ(ambassador.coins(),"0");
    CHECK_EQ(captain.coins(),"0");
    CHECK_EQ(contessa.coins(),"0");

    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(assassin.role(),"Assassin");
    CHECK_EQ(ambassador.role(),"Ambassador");
    CHECK_EQ(captain.role(),"Captain");
    CHECK_EQ(contessa.role(),"Contessa");

    duke.income();
	assassin.income();
	ambassador.income();
	captain.income();
	contessa.income();

    CHECK_EQ(duke.coins(),"3");
    CHECK_EQ(assassin.coins(),"1");
    CHECK_EQ(ambassador.coins(),"1");
    CHECK_EQ(captain.coins(),"1");
    CHECK_EQ(contessa.coins(),"1");

    duke.foreign_aid();
	assassin.foreign_aid();
	ambassador.foreign_aid();
	captain.foreign_aid();
	contessa.foreign_aid();

    CHECK_EQ(duke.coins(),"5");
    CHECK_EQ(assassin.coins(),"3");
    CHECK_EQ(ambassador.coins(),"3");
    CHECK_EQ(captain.coins(),"3");
    CHECK_EQ(contessa.coins(),"3");

}