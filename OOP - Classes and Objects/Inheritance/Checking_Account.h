//
// Created by Admin on 14/04/2019.
//

#ifndef INHERITANCE_CHECKING_ACCOUNT_H
#define INHERITANCE_CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char* def_name ="Unnamed Checking_Account";
    static constexpr double def_ballance = 0.0;
    static constexpr double def_fee = 1.5;

protected:

public:
    Checking_Account(std::string name=def_name, double balance=def_ballance);

    bool withdraw(double ammount);
};


#endif //INHERITANCE_CHECKING_ACCOUNT_H
