#include <iostream>
#include "Mystring.h"
using namespace std;

int main(){


    Mystring b {"dodatkowy"}; //creates object "boy" using string argument constructor
    Mystring a; //creates empty object using no args constuructor
    Mystring d;

    cout<< "Type names for 2 objects:"<<endl;
    cout<<boolalpha<<endl;
    cin >> a >> d; //takes input data to objects using overloaded ">>" operator

    Mystring z = a + " " + d + " " + b; // adding strings using overloaded "+" operator

    cout <<z; //prints data from object "z" using overloaded "<<" operator

}


//By Radosław Skałbania//