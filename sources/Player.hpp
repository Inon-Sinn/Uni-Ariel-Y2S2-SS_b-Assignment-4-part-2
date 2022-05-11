#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Game.hpp"
#pragma once

using namespace std;

namespace coup{

    class Player{

        private:

            Game game;
            int player_coins;
            bool alive;
            std::string name;
            std::string last_move;


        public:
            //constructors
            Player(Game&,std::string);
            ~Player() = default;

            //getter functions
            bool get_alive() const {return alive;}
            std::string get_name() const {return name;}
            int coins() const {return player_coins;}
            std::string get_last_move() const {return last_move;}

            //setter functions
            void set_alive(){alive = false;}

            // Auxilliary function
            void check(bool coup_move);

            // Class Methods
            virtual std::string role(){
                return "test";
            }

            std::string coins(){
                return "test";
            }

            void income(){}

            void foreign_aid(){}

            void coup(Player &other){}



    };


}