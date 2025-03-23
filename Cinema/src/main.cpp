#include "City.hpp" 

using namespace std ;

int main()
{
    City Theater_Table ;

    bool loop1 = true ;

    while(loop1)
    {
        int order ;

        Theater_Table.show_menu() ;

        cin>> order ;
        cout<< '\n' ;

        switch (order)
        {
            case 1 :
            {
                bool loop2 = true ;

                while(loop2) 
                {
                    int movie ;

                    Theater_Table.show_movie_menu_Theater_1() ;

                    cin>> movie ;
                    cout<< '\n' ;

                    switch (movie) 
                    {
                        case 1 :
                        {
                            cout<< "movie 1 : " << Theater_Table.get_Teather_1_movie_1() << '\n' ;
                            
                            Theater_Table.draw_Theater_1_movie_1() ;

                            if(!Theater_Table.check_Theater_1_movie_1()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_1_movie_1(--row , --col) ;
                            
                            break ;
                        }

                        case 2 : 
                        {
                            cout<< "movie 2 : " << Theater_Table.get_Teather_1_movie_2() << '\n' ;
                                
                            Theater_Table.draw_Theater_1_movie_2() ;

                            if(!Theater_Table.check_Theater_1_movie_2()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_1_movie_2(--row , --col) ;

                            break ;
                        }
                        case 3 : 
                        {
                            loop2 = false ;
                            break ;
                        }
                        default :
                        {
                            cout<< "your movie is not logical\n" ;
                            break ;
                        }
                    }
                }
                break ;
            }
            case 2 :
            {
                bool loop2 = true ;

                while(loop2) 
                {
                    int movie ;

                    Theater_Table.show_movie_menu_Theater_2() ;

                    cin>> movie ;
                    cout<< '\n' ;

                    switch (movie) 
                    {
                        case 1 :
                        {
                            cout<< "movie 1 : " << Theater_Table.get_Teather_2_movie_1() << '\n' ;
                            
                            Theater_Table.draw_Theater_2_movie_1() ;

                            if(!Theater_Table.check_Theater_2_movie_1()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_2_movie_1(--row , --col) ;
                            
                            break ;
                        }

                        case 2 : 
                        {
                            cout<< "movie 2 : " << Theater_Table.get_Teather_2_movie_2() << '\n' ;
                                
                            Theater_Table.draw_Theater_2_movie_2() ;

                            if(!Theater_Table.check_Theater_2_movie_2()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_2_movie_2(--row , --col) ;

                            break ;
                        }
                        case 3 : 
                        {
                            loop2 = false ;
                            break ;
                        }
                        default :
                        {
                            cout<< "your movie is not logical\n" ;
                            break ;
                        }
                    }
                }
                break ;
            }
            case 3 :
            {
                bool loop2 = true ;

                while(loop2) 
                {
                    int movie ;

                    Theater_Table.show_movie_menu_Theater_3() ;

                    cin>> movie ;
                    cout<< '\n' ;

                    switch (movie) 
                    {
                        case 1 :
                        {
                            cout<< "movie 1 : " << Theater_Table.get_Teather_3_movie_1() << '\n' ;
                            
                            Theater_Table.draw_Theater_3_movie_1() ;

                            if(!Theater_Table.check_Theater_3_movie_1()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_3_movie_1(--row , --col) ;
                            
                            break ;
                        }

                        case 2 : 
                        {
                            cout<< "movie 2 : " << Theater_Table.get_Teather_3_movie_2() << '\n' ;
                                
                            Theater_Table.draw_Theater_3_movie_2() ;

                            if(!Theater_Table.check_Theater_3_movie_2()) 
                            {
                                cout<< "This Theater is full\n" ;
                                break ;
                            }

                            int row , col ;

                            cout<< "\nwhich seat (row , col) : " ;
                            cin>> row >> col ;
                            cout<< '\n' ;

                            Theater_Table.reserve_Theater_3_movie_2(--row , --col) ;

                            break ;
                        }
                        case 3 : 
                        {
                            loop2 = false ;
                            break ;
                        }
                        default :
                        {
                            cout<< "your movie is not logical\n" ;
                            break ;
                        }
                    }
                }
                break ;
            }
            case 4 : 
            {
                loop1 = false ;
                break ;
            }

            default:
            {
                cout<< "\nthis order is not logical\n" ;
                break;
            }
        }

    }

    return 0 ; 
}