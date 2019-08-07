//
// Created by Admin on 29/04/2019.
//

#ifndef INHERITANCE_ILLEGALBALANCEEXCEPTION_H
#define INHERITANCE_ILLEGALBALANCEEXCEPTION_H
#include <exception>

class IllegalBalanceException: public std::exception{

public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {
        return "Illegal balance exception";
    }

};

#endif //INHERITANCE_ILLEGALBALANCEEXCEPTION_H
