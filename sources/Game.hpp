#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#pragma once

using namespace std;

namespace coup{

    class Game{

        private:
            std::vector<Player*> player_names;
            bool game_started;
            int _turn;

        public:
            
            // Constructor and desctructor
            Game();
            ~Game() = default;

            // methods
            void add_player(Player* p); 

            // return the Names of the players
            vector<string> players();
            
            // return the next turn players name
            std::string turn();
            void next_turn();
            std::string cur_Turn();
            void former_turn();

            // Return the name of the winner
            std::string winner();

    };

}