
#include "BankingCommonDecl.h"
#include "AccoutnHandler.h"
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"

void AccountHandler::ShowMenu(void) const{

    cout<<"----Menu------"<<endl;
    cout<<"1. create acount"<<endl;
    cout<<"2. Deposit "<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Show All"<<endl;
    cout<<"5. Exit"<<endl;
}

void AccountHandler::MakeAccount(void){
    int sel;
    cout<<"Select Type of Account"<<endl;
    cout<<"1. Regular account"<<endl;
    cout<<"2. Credit account"<<endl;
    cout<<"Endter number."<<endl;

    cin>>sel;

    if(sel==1){
        MakeNormalAccount();
    }else{
        MakeCreditAccount();
    }
}

void AccountHandler::MakeNormalAccount(void){
    int id;
    string name;
    int balance;
    int interRate;

    cout<<"[]"
}