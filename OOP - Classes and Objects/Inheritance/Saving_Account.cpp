#include "Saving_Account.h"

using namespace std;

Saving_Account::Saving_Account(std::string name, double balance, double int_rate): Account(name,balance),int_rate{int_rate} {

}

bool Saving_Account::deposit(double ammount) {
    ammount += ammount*(int_rate/100);
    return Account::deposit(ammount);
}

std::ostream& operator<<(std::ostream &os, const Saving_Account &account) {
    os<<"Saving_Account name: ["<<account.name<<"] Saving_Balance: [$"<<account.balance<<"]"<<" Saving_Int_Rate: ["<<account.int_rate<<"%]"<<endl;
    return os;
}