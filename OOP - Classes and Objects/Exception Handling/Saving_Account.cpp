#include "Saving_Account.h"

using namespace std;

Saving_Account::Saving_Account(std::string name, double balance, double int_rate): Account(name,balance),int_rate{int_rate} {

}

 bool Saving_Account::deposit(double ammount) {
    ammount += ammount*(int_rate/100);
    return Account::deposit(ammount);
}

 void Saving_Account::print(std::ostream &os) {
    os<<"Sv_Account name: ["<<Saving_Account::name<<"] Sv_Account balance: [$"<<Saving_Account::balance<<"] Sv_Account fee: ["<<Saving_Account::int_rate<<"%]"<<endl;
}

bool Saving_Account::withdraw(double ammount) {
    return Account::withdraw(ammount);
}