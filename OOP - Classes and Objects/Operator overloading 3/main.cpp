#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"AAA"};
    Mystring b {"BBB"};
    Mystring c;

    cout<<"Object 'a':"<<endl;
    a.display();
    cout<<"Object 'b' before '+=' operator:"<<endl;
    b.display();
    b += a;     //copying string from object "a" to "b" using "+" operator
    cout<<"Object 'b' after '+=' operator:"<<endl;
    b.display();
    cout<<"Object 'b' after '-' operator:"<<endl;
    b=-b;       //lower case string using "-" operator
    b.display();

    cout<<"Object 'c' after '+' operator:"<<endl;
    c= a + b;
    c.display();
    return 0;
}



//By Radosław Skałbania//
