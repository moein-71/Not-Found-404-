#ifndef THEATER_NU
#define THEATER_NU

#include <iostream>
#include <string>

struct Theater_1
{
    char seat[3][2]{} ;
    std::string movie_1 = "Fight Club" ;
    std::string movie_2 = "American Psycho";
} ;

struct Theater_2
{
    char seat[4][2]{} ;
    std::string movie_1 = "Nightcrawler" ;
    std::string movie_2 = "Batman Begins" ;
} ;

struct Theater_3
{
    char seat[2][2]{} ;
    std::string movie_1 = "Equilibrium" ;
    std::string movie_2 = "My War" ;
} ;

#endif //THEATER_NU