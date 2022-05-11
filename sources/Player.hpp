#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Game.hpp"
#pragma once

using namespace std;

namespace coup{

    class Player{

        public:

            std::string role(){
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