#include <iostream>
#include "Account.h"
#include <vector>
#include "Account_Util.h"
#include "Saving_Account.h"
using namespace std;
int main() {

    vector<Account> l1;

    l1.push_back({"Radek",4000});
    l1.push_back({"Wiktor"});
    display(l1);

    deposit(l1,100);
    withdraw(l1,1000);

    deposit(l1,2000);
    withdraw(l1,500);

    vector<Saving_Account> l2;

    l2.push_back({"Radek",1000});
    l2.push_back({"Wiktor"});
    display(l2);

    deposit(l2,100);
    withdraw(l2,1000);

    deposit(l2,2000);
    withdraw(l2,500);

    vector<Trust_Account> l;

    l.push_back({"Radek",6000});
    l.push_back({"Wiktor"});
    display(l);

    deposit(l,100);
    withdraw(l,1000);

    deposit(l,2000);
    withdraw(l,500);





    return 0;
}
