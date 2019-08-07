//
// Created by Admin on 07/04/2019.
//

#include "Mystring.h"
#include <iostream>
using namespace std;



Mystring::Mystring():str{nullptr}{
    str=new char[1];
    *str='\0';

}

Mystring::Mystring(const char *s):str{nullptr} {
    if(s== nullptr){
        str=new char[1];
        *str='\0';
    }else{
        str=new char[strlen(s)+1];
        strcpy(str,s);

    }
}

Mystring::Mystring(const Mystring &source):str{nullptr} {
    str=new char[strlen(source.str)+1];
    strcpy(this->str,source.str);

}

Mystring::~Mystring() {

    delete [] str;
}



Mystring::Mystring(Mystring &&source): str(source.str) {
    source.str= nullptr;
    cout<<"Move constructor used"<<endl;
}

Mystring& Mystring::operator=(Mystring &&rhs) {

    if(this==&rhs)
        return *this;
        delete [] str;

    str= rhs.str;
    rhs.str= nullptr;
    return *this;
}

Mystring& Mystring::operator=(const Mystring &rhs) {
    if(this==&rhs)
        return *this;
    delete[] this->str;


    str=new char[strlen(rhs.str)+1];
    strcpy(this->str,rhs.str);
    return *this;

}


/*Mystring Mystring::operator-() const {

    char *buff= new char[strlen(str)+1];
    strcpy(buff,str);
    for ( int i = 0; i <strlen(buff) ; ++ i ) {
        buff[i]=tolower(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;
    return temp;

}

Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff=new char[strlen(str)+strlen(rhs.str)];
    strcpy(buff,str);

    for ( int i = 0; i <strlen(rhs.str) ; ++ i ) {
        buff[i+(strlen(str))]=rhs.str[i];

    }



    Mystring temp {buff};
    delete [] buff;
    return temp;

}



bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str,rhs.str)==0);
}

*/





size_t Mystring::get_length() { return strlen(str); }

void Mystring::display() {
    cout<<str<<" "<<get_length()<<endl;
}

const char* Mystring::get_str() const { return str; }


bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (strcmp(lhs.str,rhs.str)==0);
}


//NON MEMBER OVERLOADED FUNCTIONS

Mystring operator-(const Mystring &obj){
    char *buff = new char [strlen(obj.str)+1];
    strcpy(buff,obj.str);
    for ( int i = 0; i <strlen(buff) ; ++ i ) {
        buff[i]=tolower(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;
    return temp;
}
Mystring operator+(const Mystring &lhs, const Mystring &rhs){







    char *buff = new char [strlen(lhs.str) + strlen(rhs.str) +1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);


    Mystring temp {buff};

    delete[] buff;

    return temp;

}


std::istream &operator>>(std::istream &is, Mystring &rhs){

    char *buff = new char [1000];
    is >> buff;
    rhs = Mystring {buff};

    delete [] buff;
    return is;



}

std::ostream &operator<<(std::ostream &os, const Mystring &rhs){

    os << rhs.str;
    return os;

}

