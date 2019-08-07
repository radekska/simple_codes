//
// Created by Admin on 13/04/2019.
//

#include "Mystring.h"
#include <iostream>

Mystring::Mystring() {
    str=new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s): str{nullptr} {
    if(s== nullptr){
        str=new char[1];
        *str='\0';
    }else{
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

}

Mystring::Mystring(const Mystring &source): str{nullptr} {
    str=new char[strlen(source.str)+1];
    strcpy(str,source.str);
}

Mystring::Mystring(Mystring &&source): str(source.str) {
    source.str= nullptr;
}

Mystring::~Mystring() {
    delete [] str;
}

Mystring operator -(const Mystring &rhs){
    char *buff = new char[strlen(rhs.str)+1];
    strcpy(buff,rhs.str);
    for ( int i = 0; i <strlen(rhs.str) ; ++ i ) {
        buff[i]=tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

void operator+=( Mystring &lhs,const Mystring &rhs) {
    char *buff = new char [strlen(lhs.str),strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    lhs.str = new char [strlen(lhs.str),strlen(rhs.str)+1];
    strcpy(lhs.str,buff);
    delete [] buff;
}

Mystring operator +(const Mystring &lhs,const Mystring &rhs){
    char *buff = new char [strlen(lhs.str),strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring& Mystring:: operator=(const Mystring &rhs){
    if(this==&rhs)
        return *this;
    delete[] this->str;

    str=new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

Mystring& Mystring::operator=(Mystring &&rhs) {
    if(this==&rhs)
        return *this;
    delete[] str;

    str = rhs.str;
    rhs.str= nullptr;
    return *this;

}


void Mystring::display() {
    std::cout<<str<<std::endl;
}

