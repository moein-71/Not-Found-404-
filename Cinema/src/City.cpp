#include "City.hpp"

using namespace std ;

bool City::reserve_Theater_1(const int & row , const int & col) 
{
    if(theater_1.seat[row][col] != 'X')
    {
        theater_1.seat[row][col] = 'X' ;
        return true ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
        return false ;
    }
}

bool City::reserve_Theater_2(const int & row , const int & col) 
{
    if(theater_2.seat[row][col] != 'X')
    {
        theater_2.seat[row][col] = 'X' ;
        return true ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
        return false ;
    }
}

bool City::reserve_Theater_3(const int & row , const int & col) 
{
    if(theater_3.seat[row][col] != 'X')
    {
        theater_3.seat[row][col] = 'X' ;
        return true ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
        return false ;
    }
}

void City::draw_Theater_1() const 
{
    for(int i{} ; i < 3 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_1.seat[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_2() const 
{
    for(int i{} ; i < 4 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_2.seat[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_3() const 
{
    for(int i{} ; i < 2 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_3.seat[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}