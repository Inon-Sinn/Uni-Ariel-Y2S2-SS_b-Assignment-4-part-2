# pragma once

namespace coup{

    class Captain : public Player{

        public:

        Captain(Game&,std::string){};

        void block(Player& other){};

        void steal(Player& other){};



    };

}