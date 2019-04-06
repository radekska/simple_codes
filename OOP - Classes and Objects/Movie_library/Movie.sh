
#ifndef UNTITLED2_MOVIE_H
#define UNTITLED2_MOVIE_H

#include <iostream>
using namespace std;

class Movie {

private:


public:
    string movie_name;
    string movie_rating;
    int movie_watched;
    Movie(string name, string rating, int watched);
    Movie(const Movie &source);
    ~Movie();

};


#endif //UNTITLED2_MOVIE_H
