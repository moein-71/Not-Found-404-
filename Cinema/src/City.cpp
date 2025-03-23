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
    bool have_empty = false ;

    for(int i{} ; i < 4 && !have_empty ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_2.seat_2[i][j] != 'X')
            {
                have_empty = true ;
                break ;
            }
        } 
    }

    if(!have_empty)
    {
        cout<< "this theater is full\n" ;
        return ;
    }

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

bool City::check_Theater_1_movie_1() const 
{
    for(int i{} ; i < 3 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_1.seat_1[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
}

bool City::check_Theater_1_movie_2() const 
{
    for(int i{} ; i < 3 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_1.seat_2[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
}

bool City::check_Theater_2_movie_1() const 
{
    for(int i{} ; i < 4 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_2.seat_1[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
}

bool City::check_Theater_2_movie_2() const 
{
    for(int i{} ; i < 4 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_2.seat_2[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
}

bool City::check_Theater_3_movie_1() const
{
    for(int i{} ; i < 2 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_3.seat_1[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
}

bool City::check_Theater_3_movie_2() const
{
    for(int i{} ; i < 2 ; ++i)
    {
        for(int j{} ; j < 2 ; ++j)
        {
            if(theater_3.seat_2[i][j] != 'X')
            {
                return true ;
            }
        } 
    }

    return false ;
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

void City::show_menu() const
{
    cout<< "Welcome to the Cinema Reservation\n" ;
    cout<< "1. Theater 1\n" ;
    cout<< "2. Theater 2\n" ;
    cout<< "3. Theater 3\n" ;
    cout<< "4. Exit\n" ;
    cout<< "Select your Theater (or Exit) : " ;
} 

void City::show_movie_menu_Theater_1() const 
{
    cout<< "Chose your movie :\n" ;
    cout<< "1. movie 1 : " << theater_1.movie_1 << '\n' ;
    cout<< "2. movie 2 : " << theater_1.movie_2 << '\n' ;
    cout<< "3. back\n" ;
    cout<< "which movie : " ;
}

void City::show_movie_menu_Theater_2() const 
{
    cout<< "Chose your movie :\n" ;
    cout<< "1. movie 1 : " << theater_2.movie_1 << '\n' ;
    cout<< "2. movie 2 : " << theater_2.movie_2 << '\n' ;
    cout<< "3. back\n" ;
    cout<< "which movie : " ;
}

void City::show_movie_menu_Theater_3() const 
{
    cout<< "Chose your movie :\n" ;
    cout<< "1. movie 1 : " << theater_3.movie_1 << '\n' ;
    cout<< "2. movie 2 : " << theater_3.movie_2 << '\n' ;
    cout<< "3. back\n" ;
    cout<< "which movie : " ;
}