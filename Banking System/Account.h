

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <string>

using namespace std;

class Account{

private: 
    int accID;
    int balance;
    string cusName;


public:
    Account(int id, int moneny, string name);
    Account(const Account &ref);

    int GetAccID() const;
    virtual void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;

    ~Account();

};
#endif;