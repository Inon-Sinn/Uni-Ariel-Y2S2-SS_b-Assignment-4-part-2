#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#pragma once

using namespace std;

namespace coup{

    class Game{

        public:

            vector<string> players(){
                return vector<string>();
            }

            std::string turn(){
                return "test";
            }

            std::string winner(){
                return "test winner";
            }

    };

}