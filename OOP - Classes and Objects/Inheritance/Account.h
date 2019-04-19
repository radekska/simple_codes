//
// Created by Admin on 13/04/2019.
//

#ifndef INHERITANCE_ACCOUNT_H
#define INHERITANCE_ACCOUNT_H

#include <iostream>
#include <string>
class Account {

    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char* def_name ="Unnamed Account";
    static constexpr double def_ballance = 0.0;

protected:
    double balance;
    std::string name;

public:
    Account(std::string name = def_name, double balance = def_ballance);
    bool deposit(double ammount);
    bool withdraw(double ammount);
    double get_balance()const;

};


#endif //INHERITANCE_ACCOUNT_H
