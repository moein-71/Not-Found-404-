#include <iostream>
#include <string>

using namespace std ;

int main() 
{

    char a[3][3] {} ;

    for(int i{} ; i < 3 ; ++i) 
    {
        for(int j{} ; j < 3 ; ++j)
        {
            cout<< a[i][j] ;
        }
    }

    return 0 ;
}