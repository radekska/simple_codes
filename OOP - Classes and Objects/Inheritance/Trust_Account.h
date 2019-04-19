//
// Created by Admin on 14/04/2019.
//

#ifndef INHERITANCE_TRUST_ACCOUNT_H
#define INHERITANCE_TRUST_ACCOUNT_H
#include "Saving_Account.h"
class Trust_Account: public Saving_Account {

    friend std::ostream &operator <<(std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char* def_name ="Unnamed Trust_Account";
    static constexpr double def_ballance = 0.0;
    static constexpr double def_intrate = 0.0;
    static constexpr double bonus_ammount = 50.0;
    static constexpr double bonus_treshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percenteg = 0.2;
    int t_counter = 0;

protected:

public:
    Trust_Account(std::string name=def_name, double balance=def_ballance, double int_rate =def_intrate );
    bool deposit(double ammount);
    bool withdraw(double ammount);
};


#endif //INHERITANCE_TRUST_ACCOUNT_H
