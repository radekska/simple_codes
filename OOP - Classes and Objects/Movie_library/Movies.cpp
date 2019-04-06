#include "Movies.h"

using namespace std;

Movies::Movies() {}

int Movies::add_movies(string m_name, string m_rating, int m_watched) {

    size_t n = Movie_s.size();


    for ( int i = 0; i <=n ;  i++ ) {
        if (n > 0) {


            if (m_name != Movie_s[i].movie_name) {
                Movie_s.push_back( Movie(m_name,m_rating,m_watched) );
                return 1;

            } else {

                return 0;

            }

        } else{
            Movie new_movie(m_name,m_rating,m_watched);
            Movie_s.push_back(new_movie);
            return 1;
        }
    }


};


int Movies::intrement_watched(string m_name) {
    size_t n = Movie_s.size();
    int i =0;

            while (i<n) {
                if (m_name == Movie_s[i].movie_name) {
                    Movie_s[i].movie_watched ++;

                } else {

                }
                i++;
            }

        }




void Movies::display() {
    size_t n = Movie_s.size();
    cout<<"========================================"<<endl;
    for ( int i = 0; i <n ; ++ i ) {
        cout<<Movie_s[i].movie_name<<", "<<Movie_s[i].movie_rating<<", "<<Movie_s[i].movie_watched<<endl;
    }
    cout<<"========================================"<<endl;


}

Movies::~Movies() {}
