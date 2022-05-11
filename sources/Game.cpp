#include "Game.hpp"
#include "Player.hpp"

using namespace std;

namespace coup
{
    //constructor
    Game::Game(){
        game_started = false;
        _turn = 0;
    }

    void Game::add_player(Player* p){
        const int max_players = 6;
        if (player_names.size() == max_players)
        {
            throw("Can't add anymore players");
        }
        player_names.push_back(p);
    }

    // return the Names of the players
    vector<string> Game::players(){
        vector<string> names;
        for(auto* p : player_names)
        {
            if(p->get_alive()){
                names.push_back(p->get_name());
            }
        }
        return names;
    }
    
    // Return the name of the current players turn 
    std::string Game::cur_Turn(){
        return player_names.at((size_t)_turn)->get_name();
    }

    // return the next turn players name
    std::string Game::turn(){
        if(player_names.size()==0){
            throw("No Players in the Game");
        }
        while (player_names.at(_turn)->get_alive()==false)
        {
            next_turn();
        }
        return player_names.at((size_t)_turn)->get_name();
    }
    
    // this is call after a turn is finished and we want to update the information in the Game class
    void Game::next_turn(){
        game_started = true;
        _turn++;
        if(_turn >= player_names.size()){
            _turn == 0;
        }
    }
    
    // when the move was wrongly used we shall return it
    void Game::former_turn(){
        _turn--;
        if(_turn <0){
            _turn == (int)player_names.size()-1;
        }
    }


    // Return the name of the winner
    std::string Game::winner(){
        std::string winner_name = "You will nerver ever get this message";
        int player_counter = 0;

        if(game_started == false){
            throw ("Game hasn't even started");
        }
        for(auto* p: player_names){
            if( p->get_alive() == true){
                player_counter++;
                if (player_counter > 1)
                {
                    throw ("The Game is still running");
                }
                winner_name = p->get_name();
            }
        }
        return winner_name;
    }





}

