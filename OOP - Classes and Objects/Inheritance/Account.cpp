//
// Created by Admin on 13/04/2019.
//

#include "Account.h"
using namespace std;

Account::Account(std::string name, double balance): name{name}, balance{balance} {}

bool Account::deposit(double ammount) {
    if(ammount>0) {
        balance += ammount;
        cout<<"Ammount added: "<<ammount<<endl;
        return true;
    }else{
        cout<<"Ammount not added (invalid value): "<<ammount;
        return false;
    }
}

bool Account::withdraw(double ammount) {
    if(balance-ammount>=0){
        balance-=ammount;
        cout<<"Ammount withdrew: $"<<ammount<<endl;
        return true;
    } else{
        cout<<"Insufficient funds: "<<balance;
        return false;
    }
}

std::ostream& operator<<(std::ostream &os, const Account &account) {
    os<<"Account name: ["<<account.name<<"] Balance: [$"<<account.balance<<"]"<<endl;
    return os;
}

double Account::get_balance() const {
    return balance;
}

