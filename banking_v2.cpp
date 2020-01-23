#include <iostream>
#include <string>


using namespace std;

enum{Make=1, Deposit, Withdraw, Status, Exit};


class Account{

private:
    int accID;
    int balance;
    std::string name;

public:

    Account(int id , int balance, string name) : accID(id),balance(balance), name(name){
        cout<<"Account constructor invoked\n";
    }
    Account():accID(0),balance(0),name(""){

    }
    
    void showStatus(){
        std::cout<<"ID      : "<<accID<<"\n";
        std::cout<<"Balance : "<<balance<<"\n";
        std::cout<<"Name    : "<<name<<"\n";
    }
    int getAccId(){
        // std::cout<<"ID : "<<accID<<std::endl;
        return accID;
    }
    void withdraw(int money){
        balance>=money ? (balance-=money) : balance+=0;
    }
    void deposit(int money){
        balance+= money;
    }
};

class AccountHandler : public Account{

private:
    int accNum;
    Account * info[50];

public:
    AccountHandler(){
        cout<<"Constructor W/O parameter\n";
        accNum = 0;
    }

    void showMenu(){

        cout<<"----------Menu-----------"<<endl;
        cout<<" ["<<accNum<<"]  accounts "<<endl;
        cout<<"1.   Creat Account ------"<<endl;
        cout<<"2.       Deposit   ------"<<endl;
        cout<<"3.      Withdraw   ------"<<endl;
        cout<<"4.       Status    ------"<<endl;
        cout<<"5.    Exit System  ------"<<endl;
    }
    void showAccountStatus(){ // 4
        if(accNum <= 0){
            cout<<"Nothing in System\n";
            return;
        }
        for(int i = 0 ; i  < accNum; i++){
            info[i]->showStatus();
            cout<<endl;
        }
    }

    void CreateAccount()
    {
        int id,balance;
        string name;
    
        cout<<"-- Enter --\n";
        cout<<"Id       : ";
        cin>>id;
        cout<<"Balance  : ";
        cin>>balance;
        cout<<"Name     : ";
        cin>>name;

        info[accNum] = new Account(id,balance,name);
        accNum++;
    }
    void Deposit(){
        int id;
        int balance;
        if(balance< 0){
            cout<<" wrong input ";
            return;
        }

        cout<<"Enter id : ";
        cin>> id;
        cout<<"Enter amount : ";
        cin>> balance;
        for(int i = 0 ; i < accNum; i++){
            if(info[i]->getAccId() == id){
                info[i]->deposit(balance);

                return;
            }
        }
        cout<<" No maching account ID\n";
    }
    void Withdraw(){
        int id;
        int balance;
        if(balance< 0){
            cout<<" wrong input ";
            return;
        }

        cout<<"Enter id : ";
        cin>> id;
        cout<<"Enter amount : ";
        cin>> balance;
        for(int i = 0 ; i < accNum; i++){
            if(info[i]->getAccId() == id){
                info[i]->withdraw(balance);

                return;
            }
        }
        cout<<" No maching account ID\n";
    }

    ~AccountHandler(){
        // delete []info;
    }

};



int main(void){

    // AccountHandler sys(1,1000,"Bumjin");
    AccountHandler sys;
   

    // sys.showAccountStatus();


    int i  = 0 ;
    while(i!=5){
        sys.showMenu();
        cout<<" Enter Number : ";
        cin>>i;

        switch(i){
            case(Make):
                // cout<<"[1]\n";
                sys.CreateAccount();
                break;
            case(Deposit):
                // cout<<"[2]\n";
                sys.Deposit();
                break;
            case(Withdraw):
                // cout<<"[3]\n";
                sys.Withdraw();
                break;
            case(Status):
                // cout<<"[4]\n";
                sys.showAccountStatus();
                break;
            case(Exit):
                // cout<<"[5]\n";
                return 0;
                // break;
            default:
                cout<<"Try again\n";
                break;

        }
        i = 0;

    }

    return 0 ;
}