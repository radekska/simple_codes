#include <iostream>
#include <memory>
#include "Account.h"
#include <vector>
#include "Account_Util.h"
#include "Saving_Account.h"
#include "Trust_Account.h"
#include "InsuficientFundsException.h"
#include "IllegalBalanceException.h"
#include "Checking_Account.h"
using namespace std;




int main() {

    try {
        unique_ptr<Account> mose_acc = make_unique<Checking_Account>("Mose", -20);
        cout<<*mose_acc<<endl;
    }catch(const IllegalBalanceException &exc)  {
        cerr<<exc.what()<<endl;
    }

    try {
        unique_ptr<Account> oli_acc = make_unique<Checking_Account>("Oli",1000);
        cout<<*oli_acc<<endl;
        oli_acc->withdraw(10000);

    }catch (const InsuficientFundsException &Ife){
        cerr<<Ife.what()<<endl;
    }


    return 0;
}

//By Radosław Skałbania//