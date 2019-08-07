//
// Created by Admin on 13/04/2019.
//
#include "Account.h"
#include "InsuficientFundsException.h"
#include "IllegalBalanceException.h"
using namespace std;

Account::Account(std::string name, double balance): name{name}, balance{balance} {
    if (balance<0){
        throw IllegalBalanceException();
    }
}

 bool Account::deposit(double ammount) {
    if(ammount>0) {
        balance += ammount;
        cout<<"Ammount added: "<<ammount<<endl;
        return true;
    }else{
        cout<<"Ammount not added (invalid value): "<<ammount;

    }
}

 bool Account::withdraw(double ammount) {
    if(balance-ammount>=0){
        balance-=ammount;
        cout<<"Ammount withdrew: $"<<ammount<<endl;
        return true;
    } else{
        throw InsuficientFundsException();
    }
}

void Account::print(std::ostream &os) {
    os<<"Account name: "<<Account::name<<" Account balance: "<<Account::balance<<endl;
}




