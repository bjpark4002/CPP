#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {
private:
    int specialRate;
public:
    HighCreditAccount(int ID, int money, string name, int rate, int special) : NormalAccount(ID, moeny, name, rate, special), specialRate(special){

    }

    virtual void Deposit(int moeny){
        NormalAccount::Deposit(money);
        Account::Deposit(money*(speicalRate/100.0));
    }
};

#endif