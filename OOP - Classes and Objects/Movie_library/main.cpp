#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies,string name, string rating, int watched);


int main(){

    Movies my_movies;
    add_movie(my_movies,"Wolf of Wallstreet","10/10",20);
    add_movie(my_movies,"Interstellar","9/10",5);
    add_movie(my_movies,"Wolf of Wallstreet","10/10",20);
    add_movie(my_movies,"Venom","6/10",1);

    my_movies.display();
    increment_watched(my_movies,"Interstellar");
    increment_watched(my_movies,"Venom");
    my_movies.display();


    return 0;
};


void add_movie(Movies &movies,string name, string rating, int watched){

    if(movies.add_movies(name,rating,watched)) {

        cout<<name<<" added "<<endl;

    } else{
        cout<<name<<" already exists"<<endl;
    }


}
void increment_watched(Movies &movies,string name){

    if(movies.intrement_watched(name)) {

        cout<<name<<" watch incremented "<<endl;

    } else{
        cout<<name<<" not found"<<endl;
    }


}

