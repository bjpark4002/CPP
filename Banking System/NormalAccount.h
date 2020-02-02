
#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account{
private:
    int interRate:
public:
    NormalAccount(int ID, int money, string name, int rate):Account(ID,money,name), interRate(rate){

    }
    virtual void Deposit(int moeny){
        Account::Deposit(money);
        Account::Deposit(money*(interRate/100.0));
    }


}


#endif 