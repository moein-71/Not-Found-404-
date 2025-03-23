#ifndef CITY_NU
#define CITY_NU

#include "Theater.hpp"

class City 
{
    public :

        std::string get_Teather_1_movie_1() const ;
        std::string get_Teather_1_movie_2() const ;

        std::string get_Teather_2_movie_1() const ;
        std::string get_Teather_2_movie_2() const ;

        std::string get_Teather_3_movie_1() const ;
        std::string get_Teather_3_movie_2() const ;

        void reserve_Theater_1_movie_1(const int & row , const int & col) ;
        void reserve_Theater_1_movie_2(const int & row , const int & col) ;

        void reserve_Theater_2_movie_1(const int & row , const int & col) ;
        void reserve_Theater_2_movie_2(const int & row , const int & col) ;

        void reserve_Theater_3_movie_1(const int & row , const int & col) ;
        void reserve_Theater_3_movie_2(const int & row , const int & col) ;

        void draw_Theater_1_movie_1() const ;
        void draw_Theater_1_movie_2() const ;

        void draw_Theater_2_movie_1() const ;
        void draw_Theater_2_movie_2() const ;

        void draw_Theater_3_movie_1() const ;
        void draw_Theater_3_movie_2() const ;

    private :

        Theater_1 theater_1 ;
        Theater_2 theater_2 ;
        Theater_3 theater_3 ;
} ;

#endif //CITY_NU