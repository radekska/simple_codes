//
// Created by Admin on 13/04/2019.
//

#ifndef INHERITANCE_SAVING_ACCOUNT_H
#define INHERITANCE_SAVING_ACCOUNT_H

#include "Account.h"

class Saving_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &account);

private:
    static constexpr const char* def_name ="Unnamed Saving_Account";
    static constexpr double def_ballance = 0.0;
    static constexpr double def_intrate = 0.0;
protected:
    double int_rate;


public:
    Saving_Account(std::string name=def_name, double balance=def_ballance, double int_rate= def_intrate);
    bool deposit(double ammount);


};


#endif //INHERITANCE_SAVING_ACCOUNT_H
