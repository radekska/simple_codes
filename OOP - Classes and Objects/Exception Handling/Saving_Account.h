//
// Created by Admin on 13/04/2019.
//

#ifndef INHERITANCE_SAVING_ACCOUNT_H
#define INHERITANCE_SAVING_ACCOUNT_H

#include "Account.h"

class Saving_Account: public Account {

private:
    static constexpr const char* def_name ="Unnamed Saving_Account";
    static constexpr double def_ballance = 0.0;
    static constexpr double def_intrate = 0.0;
protected:
    double int_rate;


public:
    Saving_Account(std::string name=def_name, double balance=def_ballance, double int_rate= def_intrate);
    virtual bool deposit(double ammount) override ;
    virtual bool withdraw(double ammount) override ;

    virtual void print(std::ostream &os) override ;
    virtual ~Saving_Account() = default;


};


#endif //INHERITANCE_SAVING_ACCOUNT_H
