# pragma once
namespace coup{

    class Contessa : public Player{

        public:

        Contessa(Game&,std::string){};

        void block(Player& other){};

    };

}