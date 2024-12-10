#pragma once

#include <string>

using namespace std;

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
public:
    Account();
    Account(double val, string str);
    ~Account();

    bool Withdraw(double amount);
    bool Deposit(double amount);

private:
    double balance;
    string name;
};

#endif //ACCOUNT_H
