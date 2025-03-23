#ifndef CITY_NU
#define CITY_NU

#include "Theater.hpp"

class City 
{
    public :

        bool reserve_Theater_1(const int & row , const int & col) ;
        bool reserve_Theater_2(const int & row , const int & col) ;
        bool reserve_Theater_3(const int & row , const int & col) ;

        void draw_Theater_1() const ;
        void draw_Theater_2() const ;
        void draw_Theater_3() const ;

    private :

        Theater_1 theater_1 ;
        Theater_2 theater_2 ;
        Theater_3 theater_3 ;
} ;

#endif //CITY_NU