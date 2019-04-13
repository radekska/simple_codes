//
// Created by Admin on 10/04/2019.
//

#ifndef CHALLENGE_MYSTRING_H
#define CHALLENGE_MYSTRING_H


class Mystring {

private:
        char *str;

public:
//constructors
    Mystring();
    Mystring(const char *str);
    Mystring(const Mystring &source);
    Mystring( Mystring &&source);
    ~Mystring();
//member functions
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=( Mystring &&rhs);

    Mystring operator-();
    Mystring operator+(const Mystring &rhs);
    void operator+=(const Mystring &rhs);
    Mystring operator*(int m);
    void operator*=(int m);
    bool operator==(const Mystring &rhs) const ;
    bool operator!=(const Mystring &rhs) const ;
    bool operator<(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;


    void display();

};


#endif //CHALLENGE_MYSTRING_H
