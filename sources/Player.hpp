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

            bool alive;
            std::string name;

        public:
            //constructors
            Player(Game&,std::string);
            ~Player() = default;
            //getter functions
            bool get_alive();
            std::string get_name();

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