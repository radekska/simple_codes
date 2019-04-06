
#ifndef UNTITLED2_MOVIES_H
#define UNTITLED2_MOVIES_H

#include <iostream>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies {

    friend class Movie;

private:
    vector <Movie> Movie_s;

public:
    Movies();
    int add_movies(string m_name, string m_rating, int m_watched);
    int intrement_watched(string m_name);
    void display();
    ~Movies();
};


#endif //UNTITLED2_MOVIES_H
