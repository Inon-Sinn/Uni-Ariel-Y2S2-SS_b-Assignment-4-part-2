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
    
    // return the next turn players name
    std::string Game::turn(){
        while (player_names.at(_turn)->get_alive()==false)
        {
            _turn++;
            if(_turn >= player_names.size()){
                _turn == 0;
            }
        }
        return player_names.at((size_t)_turn)->get_name();
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

