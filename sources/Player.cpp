#include "Player.hpp"
#include "Game.hpp"

namespace coup{

    //Constructor
    Player::Player(Game& game,std::string player_name ){
        alive = true;
        name = player_name;
        game.add_player(this);
    }

    bool Player::get_alive(){
        return alive;
    }

    std::string Player::get_name(){
        return name;
    }

}
