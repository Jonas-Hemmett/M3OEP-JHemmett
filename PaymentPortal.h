#include <vector>
#include <string>
#include "item.h"
#include "ItemIn.h"
#include <iostream>

#ifndef PAYMENTPORTAL_H
#define PAYMENTPORTAL_H

/*
    Manages the stores income and expenses.
*/
class PaymentPortal {
private:
    // If the store spends more money than they have, the money goes to overdraft.
    int balance = 0;
    int overDraft = 0;
public:

    // Getters and setters.
    int getBalance();
    int getOverDraft();

    void deposit(int amount);
    void withdraw(int amount);
};



#endif //PAYMENTPORTAL_H
