#pragma once

namespace coup{

    class Duke : public Player{

        public:

        Duke(Game&,std::string){};

        void tax(){};

        void block(Player& other){};


    };

}