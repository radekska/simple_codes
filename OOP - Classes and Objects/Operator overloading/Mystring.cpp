//
// Created by Admin on 10/04/2019.
//

#include "Mystring.h"
#include <iostream>

Mystring::Mystring(): str{nullptr} {
    str = new char [1];
    *str='\0';
}

Mystring::Mystring(const char *s): str{nullptr} {
    if(s== nullptr){
       str=new char[1];
       *str='\0';
    }else{
        str = new char [strlen(s)+1];
        strcpy(str,s);
    }

}

Mystring::Mystring(const Mystring &source): str{nullptr} {
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);

}

Mystring::Mystring( Mystring &&source): str(source.str) {
    source.str = nullptr;
}

Mystring::~Mystring() {
    delete [] str;
}


Mystring& Mystring::operator=(const Mystring &rhs) {
    if(this==&rhs)
        return *this;
    delete[] this->str;

    str = new char [strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;

}

Mystring& Mystring::operator=(Mystring &&rhs) {
    if(this==&rhs)
        return *this;
    delete [] str;

    str = rhs.str;
    rhs.str = nullptr;
    return *this;

}

Mystring Mystring::operator-() {
    char *buff = new char [strlen(str)+1];
    strcpy(buff,str);

    for ( int i = 0; i <strlen(str) ; ++ i ) {
        buff[i]=tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs){
    char *buff = new char [strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

void Mystring::operator+=(const Mystring &rhs) {
    strcat(str,rhs.str);
}

Mystring Mystring::operator*(int m) {
    char *buff = new char[(strlen(str)) + 1];
    strcpy(buff,str);
    for ( int i = 0; i <m-1; ++ i ) {
        strcat(str, buff);
    }
    delete[] buff;
    return *this;

}

void Mystring::operator*=(int m){

    char *buff = new char[(strlen(str)) + 1];
    strcpy(buff,str);
    for ( int i = 0; i <m-1; ++ i ) {
        strcat(str, buff);
    }
    delete[] buff;

}

bool Mystring::operator==(const Mystring &rhs) const {
    return (strcmp(str,rhs.str)==0);
}

bool Mystring::operator!=(const Mystring &rhs) const {
    return (strcmp(str,rhs.str)!=0);
}

bool Mystring::operator<(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)<0);
}

bool Mystring::operator>(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)>0);
}


void Mystring::display(){

    std::cout<<str;
}