//
// Created by Admin on 07/04/2019.
//

#ifndef UNTITLED1_MYSTRING_H
#define UNTITLED1_MYSTRING_H


#include <cstdio>
#include <iosfwd>

class Mystring {

private:
    char *str;


    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &os, Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &is, const Mystring &rhs);
public:

    Mystring(); //no args constuructor
    Mystring(const char *str); //str arg constructor
    Mystring(const Mystring &source); //copy constructor

    Mystring(Mystring &&source); //move constructor
    ~Mystring();

   // bool operator==(const Mystring &rhs) const; //Equality

    Mystring &operator=(const Mystring &rhs); //copy asssigment
    Mystring &operator=(Mystring &&rhs); //move assigment


   // Mystring operator-() const;                       //Lower case
   // Mystring operator+(const Mystring &rhs) const; //Concatenate


    void display();
    size_t get_length();
    const char *get_str() const;

};


#endif //UNTITLED1_MYSTRING_H
