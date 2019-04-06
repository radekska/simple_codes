
#include "Movie.h"
using namespace std;

Movie::Movie(string name, string rating, int watched): movie_name{name},movie_rating{rating},movie_watched{watched}{};

Movie::Movie(const Movie &source)
: movie_name{source.movie_name},movie_rating{source.movie_rating},movie_watched{source.movie_watched}{};

Movie::~Movie() {}


