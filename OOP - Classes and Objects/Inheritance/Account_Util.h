//
// Created by Admin on 14/04/2019.
//

#ifndef INHERITANCE_ACCOUNT_UTIL_H
#define INHERITANCE_ACCOUNT_UTIL_H

#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include <vector>
using namespace std;
//Utility helper functions for Account class
void display(const vector<Account> &accounts);
void deposit(vector <Account> &accounts, double ammount);
void withdraw(vector <Account> &accounts, double ammount);


//Utility helper functions for Saving_Account class
void display(const vector<Saving_Account> &accounts);
void deposit(vector <Saving_Account> &accounts, double ammount);
void withdraw(vector <Saving_Account> &accounts, double ammount);

//Utility helper functions for Checking_Account class
void display(const vector<Checking_Account> &accounts);
void deposit(vector <Checking_Account> &accounts, double ammount);
void withdraw(vector <Checking_Account> &accounts, double ammount);

//Utility helper functions for Trust_Account class
void display(const vector<Trust_Account> &accounts);
void deposit(vector <Trust_Account> &accounts, double ammount);
void withdraw(vector <Trust_Account> &accounts, double ammount);




#endif //INHERITANCE_ACCOUNT_UTIL_H
