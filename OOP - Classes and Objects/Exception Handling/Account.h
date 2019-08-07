//
// Created by Admin on 13/04/2019.
//

#ifndef INHERITANCE_ACCOUNT_H
#define INHERITANCE_ACCOUNT_H

#include <iostream>
#include <string>
#include "I_Printable.h"
class Account: public I_Printable{

private:
    static constexpr const char* def_name ="Unnamed Account";
    static constexpr double def_ballance = 0.0;

protected:
    double balance;
    std::string name;

public:
    Account(std::string name = def_name, double balance = def_ballance);
    virtual bool deposit(double ammount)=0;
    virtual bool withdraw(double ammount)=0;
    virtual void print(std::ostream &os) override ;
    virtual ~Account() = default;


};


#endif //INHERITANCE_ACCOUNT_H
