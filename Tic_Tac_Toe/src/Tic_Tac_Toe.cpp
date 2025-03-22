#include "Player1.hpp"
#include "Player2.hpp"
#include "Tic_Tac_Toe.hpp"

using namespace std ;

bool Tic_Tac_Toe::set_Player1(const int & row , const int & col)
{
    if(Table[row][col] == PLAYER_1::Player1 || Table[row][col] == PLAYER_2::Player2)
    {
        cout<< "This place is full" << '\n' ;
        return false ;
    }

    if(row < 0 || row > 2) 
    {
        cout<< '\n' << "your row is not logical" ;
        return false ;
    }
    if(col < 0 || col > 2) 
    {
        cout<< '\n' << "your row is not logical" ;
        return false ;
    }

    Table[row][col] = PLAYER_1::Player1 ;
    return true ;
}

bool Tic_Tac_Toe::set_Player2(const int & row , const int & col)
{
    if(Table[row][col] == PLAYER_1::Player1 || Table[row][col] == PLAYER_2::Player2)
    {
        cout<< "This place is full" << '\n' ;
        return false ;
    }

    Table[row][col] = PLAYER_2::Player2 ;
}

bool Tic_Tac_Toe::check_Player1() const
{
    bool winner ;

    for(int i{} ; i < 3 ; ++i) 
    {
        winner = true ;

        for(int j{} ; j < 3 ; ++j) {

            if(Table[i][j] != PLAYER_1::Player1) 
            {
                winner = false ;
            }
        }

        if(winner) 
        {
            return winner ;
        }
    }

    for(int j{} ; j < 3 ; ++j)
    {
        winner = true ;

        for(int i{} ; i < 3 ; ++i)
        {
            if(Table[i][j] != PLAYER_1::Player1)
            {
                winner = false ;
            }
        }

        if(winner) 
        {
            return winner ;
        }
    }

    winner = true ;

    for(int i{} , j{} ; i < 3 ; ++i , ++j) 
    {
        if(Table[i][j] != PLAYER_1::Player1)
        {
            winner = false ;
        }
    }

    if(winner) 
    {
        return winner ;
    }

    winner = true ;

    for(int i{2} , j{2} ; i >= 0 ; --i , --j)
    {
        if(Table[i][j] != PLAYER_1::Player1)
        {
            winner = false ;
        }
    }

    if(winner) 
    {
        return winner ;
    }
}

bool Tic_Tac_Toe::check_Player2() const
{
    bool winner ;

    for(int i{} ; i < 3 ; ++i) 
    {
        winner = true ;

        for(int j{} ; j < 3 ; ++j) {

            if(Table[i][j] != PLAYER_2::Player2) 
            {
                winner = false ;
            }
        }

        if(winner) 
        {
            return winner ;
        }
    }

    for(int j{} ; j < 3 ; ++j)
    {
        winner = true ;

        for(int i{} ; i < 3 ; ++i)
        {
            if(Table[i][j] != PLAYER_2::Player2)
            {
                winner = false ;
            }
        }

        if(winner) 
        {
            return winner ;
        }
    }

    winner = true ;

    for(int i{} , j{} ; i < 3 ; ++i , ++j) 
    {
        if(Table[i][j] != PLAYER_2::Player2)
        {
            winner = false ;
        }
    }

    if(winner) 
    {
        return winner ;
    }

    winner = true ;

    for(int i{2} , j{2} ; i >= 0 ; --i , --j)
    {
        if(Table[i][j] != PLAYER_2::Player2)
        {
            winner = false ;
        }
    }

    if(winner) 
    {
        return winner ;
    }
}

void Tic_Tac_Toe::draw() const
{
    for(int i{} ; i < 3 ; ++i)
    {
        cout<< Table[i][0] << " | " << Table[i][1] << " | " << Table[i][2] ;
        cout<< '\n' << "---------" << '\n' ; 
    }
} 