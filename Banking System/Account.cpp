\\
#include "BankingCommonDecl.h"
#include "Account.h"

    Account::Account(int id, int moneny, string name) : accID(id), balance(money), cusName(name) 
    {

    }
    Account::Account(const Account &ref) ::accID(ref.accID), balance(ref.balance), cusName(ref.cusName) 
    {

    }

    int Account::GetAccID() const{

        return accID;
    }
    void Account::Deposit(int money){
        balance+=money;

    }
    int Account::Withdraw(int money){
        if(balance<money)
            return 0;
        balance -= money;
        return moeny;
    }
    void Account::ShowAccInfo() const{
        cout<<"ID      : "<<accID<<endl;
        cout<<"Balance : "<<balance<<endl;
        cout<<"Nmae    : "<<cusName<<endl;

    }

    ~Account(){
        
    }