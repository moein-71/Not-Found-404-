#include "City.hpp"

using namespace std ;

string City::get_Teather_1_movie_1() const 
{
    return theater_1.movie_1 ;
}

string City::get_Teather_1_movie_2() const 
{
    return theater_1.movie_2 ;
}

string City::get_Teather_2_movie_1() const 
{
    return theater_2.movie_1 ;
}

string City::get_Teather_2_movie_2() const 
{
    return theater_2.movie_2 ;
}

string City::get_Teather_3_movie_1() const 
{
    return theater_3.movie_1 ;
}

string City::get_Teather_3_movie_2() const 
{
    return theater_3.movie_2 ;
}

void City::reserve_Theater_1_movie_1(const int & row , const int & col) 
{
    if(row < 0 || row > 2) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_1.seat_1[row][col] != 'X')
    {
        theater_1.seat_1[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::reserve_Theater_1_movie_2(const int & row , const int & col)
{
    if(row < 0 || row > 2) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_1.seat_2[row][col] != 'X')
    {
        theater_1.seat_2[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::reserve_Theater_2_movie_1(const int & row , const int & col) 
{
    if(row < 0 || row > 3) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_2.seat_1[row][col] != 'X')
    {
        theater_2.seat_1[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::reserve_Theater_2_movie_2(const int & row , const int & col) 
{
    if(row < 0 || row > 3) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_2.seat_2[row][col] != 'X')
    {
        theater_2.seat_2[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::reserve_Theater_3_movie_1(const int & row , const int & col) 
{
    if(row < 0 || row > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_3.seat_1[row][col] != 'X')
    {
        theater_3.seat_1[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::reserve_Theater_3_movie_2(const int & row , const int & col) 
{
    if(row < 0 || row > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }
    else if(col < 0 || col > 1) 
    {
        cout<< "your seat is not logical\n" ;
        return ;
    }

    if(theater_3.seat_2[row][col] != 'X')
    {
        theater_3.seat_2[row][col] = 'X' ;
    }
    else 
    {
        cout<< "this place is not empty \n" ;
    }
}

void City::draw_Theater_1_movie_1() const 
{
    for(int i{} ; i < 3 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_1.seat_1[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_1_movie_2() const 
{
    for(int i{} ; i < 3 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_1.seat_2[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_2_movie_1() const 
{
    for(int i{} ; i < 4 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_2.seat_1[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_2_movie_2() const 
{
    for(int i{} ; i < 4 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_2.seat_2[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_3_movie_1() const 
{
    for(int i{} ; i < 2 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_3.seat_1[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}

void City::draw_Theater_3_movie_2() const 
{
    for(int i{} ; i < 2 ; ++i) 
    {
        for(int j{} ; j < 2 ; ++j)
        {
            cout<< '[' << theater_3.seat_2[i][j] << "] " ;
        }
        cout<< '\n' ;
    }
}