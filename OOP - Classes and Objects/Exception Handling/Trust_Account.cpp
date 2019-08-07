//
// Created by Admin on 14/04/2019.
//

#include "Trust_Account.h"
using namespace std;


Trust_Account::Trust_Account(std::string name, double balance, double int_rate): Saving_Account(name, balance,int_rate), t_counter{0}{
    if(balance>=bonus_treshold){
        Saving_Account::balance+=bonus_ammount;
    }

}

 bool Trust_Account::deposit(double ammount) {
    ammount += ammount*(int_rate/100);
    if(ammount>=bonus_treshold){
        ammount+=bonus_ammount;
    }
    return Account::deposit(ammount);
}

 bool Trust_Account::withdraw(double ammount) {
    if (ammount < (max_withdraw_percenteg * balance) && t_counter < max_withdrawals) {
        t_counter ++;
        return Account::withdraw(ammount);
    } else {
        cout << "Error: withdrwal ammount greater than 20% of account balance or to many withdrawals per year! ";
    }
}

 void Trust_Account::print(std::ostream &os) {
    os<<"Tr_Account name: ["<<Trust_Account::name<<"] Tr_Account balance: [$"<<Trust_Account::balance<<"] Tr_Account fee: ["<<Trust_Account::int_rate<<"%]"<<" Withdrawals: "<<Trust_Account::t_counter<<endl;
}
