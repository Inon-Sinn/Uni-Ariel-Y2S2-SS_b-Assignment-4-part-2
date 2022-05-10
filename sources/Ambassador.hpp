# pragma once

namespace coup{

    class Ambassador : public Player{

        public:

        Ambassador(Game&,std::string){};

        void transfer(Player& from,Player& to){};


    };

}