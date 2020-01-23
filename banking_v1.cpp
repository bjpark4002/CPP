#include <iostream>
#include <string>

using namespace std;

class Account{


private:

    int accID;
    int balance;
    std::string name;
public:

    Account(int a, int b, std::string c) : accID(a), balance(b), name(c)
    {
        std::cout<<" Constructor Invoked"<<std::endl;
    }
    Account(Account * ref) : accID(ref->accID), balance(ref->balance), name(ref->name){
        std::cout<<" * constructor invoked"<<std::endl;
    }
    Account(const Account &ref) : accID(ref.accID+1), balance(ref.balance+1), name(ref.name)
    {
        std::cout<<" & Constructor Invoked"<<std::endl;
    }
    

    void showStatus(){
        std::cout<<"ID      : "<<accID<<"\n";
        std::cout<<"Balance : "<<balance<<"\n";
        std::cout<<"Name    : "<<name<<"\n";
    }
    int getAccId(){
        std::cout<<"ID : "<<accID<<std::endl;
        return accID;
    }
    void widthraw(int money){
        balance>=money ? (balance-=money) : balance+=0;
    }
    void deposit(int money){
        balance+= money;
    }

};


int main(void){


    Account *sys = new Account(1,1000,"Bumjin");
    Account *sys2(sys); // 16 line is not invoked.


    Account tem(2,1002,"Camila");
    Account tem2(tem);

    sys->showStatus();
    sys2->showStatus();

    tem.showStatus();
    tem2.showStatus();

    tem2.widthraw(1000);
    tem2.showStatus();

    return 0;
}