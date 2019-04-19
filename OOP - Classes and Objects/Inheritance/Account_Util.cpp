//
// Created by Admin on 14/04/2019.
//

#include "Account_Util.h"
//Utility helper functions for Account class
void display(const vector<Account> &accounts){
    cout<<"====DISPLAYING================"<<endl;
    for (const auto &v: accounts){
        cout<<v;
    }
    cout<<endl;

};
void deposit(vector <Account> &accounts, double ammount){
    cout<<"====DEPOSIT==================="<<endl;
    for (auto &v: accounts){
        if(v.deposit(ammount)) { ;
            cout << v;
        } else{
            cout<<"deposit to Account failed"<<endl;
        }
    }
    cout<<endl;

};
void withdraw(vector <Account> &accounts, double ammount){
    cout<<"====WITHDRAW=================="<<endl;
    for (auto &v: accounts){
        if(v.withdraw(ammount)) { ;
            cout << v;
        }else{
            cout<<"\nwithdraw from Account failed"<<endl;
        }
    }
    cout<<endl;

};


//Utility helper functions for Saving_Account class
void display(const vector<Saving_Account> &accounts){
    cout<<"==DISPLAYING SAVING ACCOUNT==="<<endl;
    for (const auto &v: accounts){
        cout<<v;
    }
    cout<<endl;

};
void deposit(vector <Saving_Account> &accounts, double ammount){
    cout<<"==DEPOSIT TO SAVING ACCOUNT==="<<endl;
    for (auto v: accounts){
        if(v.deposit(ammount)) {
            cout << v;
        } else{
            cout<<"deposit to Saving_Account failed"<<endl;
        }
    }
    cout<<endl;

};
void withdraw(vector <Saving_Account> &accounts, double ammount){
    cout<<"==WITHDRAW FROM SAVING ACCOUNT="<<endl;
    for (auto v: accounts) {
        if (v.withdraw(ammount)) { ;
            cout << v;
        }else{
            cout<<"\nwithdraw from Saving_Account failed"<<endl;
        }
    }
    cout<<endl;

};


//Utility helper functions for Checking_Account class
void display(const vector<Checking_Account> &accounts){
    cout<<"====DISPLAYING CH_A================"<<endl;
    for (const auto &v: accounts){
        cout<<v;
    }
    cout<<endl;

};
void deposit(vector <Checking_Account> &accounts, double ammount){
    cout<<"====DEPOSIT CH_A==================="<<endl;
    for (auto &v: accounts){
        if(v.deposit(ammount)) { ;
            cout << v;
        } else{
            cout<<"deposit to Account failed"<<endl;
        }
    }
    cout<<endl;

};
void withdraw(vector <Checking_Account> &accounts, double ammount){
    cout<<"====WITHDRAW CH_A=================="<<endl;
    for (auto &v: accounts){
        if(v.withdraw(ammount)) { ;
            cout << v;
        }else{
            cout<<"\nwithdraw from Account failed"<<endl;
        }
    }
    cout<<endl;

};



//Utility helper functions for Trust_Account class
void display(const vector<Trust_Account> &accounts){
    cout<<"====DISPLAYING T_A================"<<endl;
    for (const auto &v: accounts){
        cout<<v;
    }
    cout<<endl;

};
void deposit(vector <Trust_Account> &accounts, double ammount){
    cout<<"====DEPOSIT T_A==================="<<endl;
    for (auto &v: accounts){
        if(v.deposit(ammount)) { ;
            cout << v;
        } else{
            cout<<"deposit to Account failed"<<endl;
        }
    }
    cout<<endl;

};
void withdraw(vector <Trust_Account> &accounts, double ammount){
    cout<<"====WITHDRAW T_A=================="<<endl;
    for (auto &v: accounts){
        if(v.withdraw(ammount)) { ;
            cout << v;
        }else{
            cout<<"\nwithdraw from Account failed"<<endl;
        }
    }
    cout<<endl;

};







