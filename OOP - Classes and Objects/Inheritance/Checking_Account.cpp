//
// Created by Admin on 14/04/2019.
//

#include "Checking_Account.h"
#include <iostream>

using namespace std;

std::ostream& operator<<(std::ostream &os, const Checking_Account &account) {
    os<<"Checking_Account name: ["<<account.name<<"] Checking_Balance: [$"<<account.balance<<"] "<<"Checking_Fee: [$"<<Checking_Account::def_fee<<"]"<<endl;
    return os;
}

Checking_Account::Checking_Account(std::string name, double balance):Account(name,balance) {}

bool Checking_Account::withdraw(double ammount) {
    if(balance>=1.5) {
        balance -= 1.5;
    }
    return Account::withdraw(ammount);
}

