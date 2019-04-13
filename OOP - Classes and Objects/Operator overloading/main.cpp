//OPERATORS OVERLOADING CLASS PROGRAM


#include <iostream>
#include "Mystring.h"
using namespace std;
int main() {

    cout <<boolalpha<<endl;
    cout<<"PRZYKLADY PRZECIAŻEŃ OPERATORÓW"<<endl;
    cout <<"======================="<<endl;

    Mystring klasa {"Klasy są"};
    klasa.display();
    cout << endl;
    klasa += " fajne";
    klasa.display();
    cout << endl;
    cout <<"======================="<<endl;

    Mystring klasa1 {"LUBIE PROGRAMOWAC W C++"};
    klasa1.display();
    cout << endl;
    klasa1 = -klasa1;
    klasa1.display();
    cout << endl;
    cout <<"======================="<<endl;


    Mystring klasa2 {"wskaznik"};
    klasa2.display();
    cout<<endl;
    klasa2 *= 3;
    klasa2.display();
    cout << endl;
    cout <<"======================="<<endl;


    Mystring klasa3{" Clion"};
    klasa3 = klasa1 + klasa3;
    klasa3.display();
    cout << endl;
    cout << endl;


    cout<<"PORÓWNANIE OBIEKTOW"<<endl;
    cout <<"======================="<<endl;
    klasa.display();
    cout <<endl;
    klasa2.display();
    cout <<endl;
    cout<<(klasa1==klasa2);
    cout <<endl;
    cout <<"======================="<<endl;
    klasa.display();
    cout<<endl;
    klasa.display();
    cout<<endl;
    cout<<(klasa1==klasa1)<<endl;


}
