//
// Created by Admin on 14/04/2019.
//

#include "Account_Util.h"
//Utility helper functions for Account class
void display(const vector<Account *> &accounts){
    cout<<"====DISPLAYING================"<<endl;
    for (const auto &v: accounts){
        cout<<*v;
    }
    cout<<endl;

};
void deposit(vector <Account  *> &accounts, double ammount){
    cout<<"====DEPOSIT==================="<<endl;
    for (auto &v: accounts){
        if(v->deposit(ammount)) { ;
            cout << *v;
        } else{
            cout<<"deposit to Account failed"<<endl;
        }
    }
    cout<<endl;

};
void withdraw(vector <Account *> &accounts, double ammount){
    cout<<"====WITHDRAW=================="<<endl;
    for (auto &v: accounts){
        if(v->withdraw(ammount)) { ;
            cout << *v;
        }else{
            cout<<"\nwithdraw from Account failed"<<endl;
        }
    }
    cout<<endl;

};









