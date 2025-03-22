#include "Tic_Tac_Toe.hpp"

using namespace std ;

int main() 
{
    Tic_Tac_Toe Game ;

    constexpr int Game_Round = 4 ;

    bool Player1_win = false ;
    bool Player2_win = false ;

    for(int i{} ; i < Game_Round ; ++i)
    {
        bool place_is_empty = false ;

        while(!place_is_empty) 
        {
            int row , col ;

            cout<< "Player 1 Enter your row : " ;
            cin>> row ;

            cout<< '\n' << "Player 1 Enter your col : " ;
            cin>> col ;

            place_is_empty = Game.set_Player1(--row , --col) ;
        }

        Game.draw() ;

        if(i >= 2) 
        {
            Player1_win = Game.check_Player1() ;

            if(Player1_win)
            {
                break ;
            }
        }

        place_is_empty = false ;

        while(!place_is_empty) 
        {
            int row , col ;

            cout<< "Player 2 Enter your row : " ;
            cin>> row ;

            cout<< '\n' << "Player 2 Enter your col : " ;
            cin>> col ;

            place_is_empty = Game.set_Player2(--row , --col) ;
        }

        Game.draw() ;

        if(i >= 2) 
        {
            Player2_win = Game.check_Player2() ;

            if(Player2_win)
            {
                break ;
            }
        }
    }

    //player 1 play one more time and game end 
}