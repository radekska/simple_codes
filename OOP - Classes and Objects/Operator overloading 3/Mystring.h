//
// Created by Admin on 13/04/2019.
//

#ifndef CHALLENGE_FRIENDS_MYSTRING_H
#define CHALLENGE_FRIENDS_MYSTRING_H


class Mystring {


private:
    char *str;

public:


    Mystring();
    Mystring(const char *str);
    Mystring(const Mystring &source);
    Mystring( Mystring &&source);
    ~Mystring();
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);



    friend Mystring operator-(const Mystring &rhs);
    friend void operator+=( Mystring &lhs,const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs);

    void display();
};


#endif //CHALLENGE_FRIENDS_MYSTRING_H
