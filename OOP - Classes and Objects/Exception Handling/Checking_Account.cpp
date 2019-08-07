//
// Created by Admin on 14/04/2019.
//

#include "Checking_Account.h"
#include <iostream>

using namespace std;


Checking_Account::Checking_Account(std::string name, double balance):Account(name,balance) {}

 bool Checking_Account::withdraw(double ammount) {
    if(balance>=1.5) {
        balance -= 1.5;
    }
    return Account::withdraw(ammount);
}

bool Checking_Account::deposit(double ammount) {
    return Account::deposit(ammount);
}

 void Checking_Account::print(std::ostream &os) {
    os<<"Ch_Account name: ["<<Checking_Account::name<<"] Ch_Account balance: [$"<<Checking_Account::balance<<"] Ch_Account fee: ["<<Checking_Account::def_fee<<"%]"<<endl;
}
