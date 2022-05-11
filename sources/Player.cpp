#include "Player.hpp"
#include "Game.hpp"

namespace coup{

    //Constructor
    Player::Player(Game& new_game,std::string player_name ){
        game = new_game;
        alive = true;
        name = player_name;
        last_move = "None";
        player_coins = 0;
        game.add_player(this);
    }

    void Player::check(bool coup_move){
        const int coup_check = 10;
        if( player_coins > coup_check && coup_move == false){
            throw ("Current player has to make a coup");
        }
        if(game.turn() != name){
            throw ("Not your turn");
        }
        game.next_turn();

    }

    void Player::income(){
        check(false);
        last_move = "income";
        player_coins++;
    }

    void Player::foreign_aid(){
        check(false);
        last_move = "foreign_aid";
        player_coins = player_coins+2;
    }

    void Player::coup(Player& p){
        check(true);
        const int coup_cost = 7;
        if (player_coins < coup_cost){
            game.former_turn();
            throw ("Not enough coins");
        }
        if(p.get_alive() == false){
            game.former_turn();
            throw("Cant kill the dead");
        }
        if(player_coins >= coup_cost){
            player_coins -= coup_cost;
            last_move = "coup"
            *p->
        }
    }

}

