//
// Created by Admin on 29/04/2019.
//

#ifndef INHERITANCE_INSUFICIENTFUNDSEXCEPTION_H
#define INHERITANCE_INSUFICIENTFUNDSEXCEPTION_H

#include <exception>

class InsuficientFundsException: public  std::exception{
public:
    InsuficientFundsException() noexcept = default;
    ~InsuficientFundsException() = default;
    virtual const char *what() const noexcept {
        return "Insufficient funds!";
    }
};
#endif //INHERITANCE_INSUFICIENTFUNDSEXCEPTION_H
