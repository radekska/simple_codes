//
// Created by Admin on 14/04/2019.
//

#ifndef INHERITANCE_ACCOUNT_UTIL_H
#define INHERITANCE_ACCOUNT_UTIL_H

#include "Account.h"
#include "I_Printable.h"
#include <vector>
using namespace std;
//Utility helper functions for Account class
void display(const vector<Account *> &accounts);
void deposit(vector <Account *> &accounts, double ammount);
void withdraw(vector <Account *> &accounts, double ammount);



#endif //INHERITANCE_ACCOUNT_UTIL_H
