#ifndef Tic_Tac_Toe_NU
#define Tic_Tac_Toe_NU

#include <iostream>

class Tic_Tac_Toe 
{
    public :

        bool set_Player1(const int & row , const int & col) ;
        bool set_Player2(const int & row ,const int & col) ;

        bool check_Player1() const ;
        bool check_Player2() const ;

        void draw() const ;

    private :

    char Table[3][3] ;
} ;

#endif //Tic_Tac_Toe_NU