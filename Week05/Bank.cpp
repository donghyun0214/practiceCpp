#include <iostream>
#include <string>

using namespace std;

class Account {
public:
     bool Withdraw(double amount) {
          if (balance - amount < 0)
               return false;
          balance -= amount;
          return true;
     }
     bool Deposit(double amount) {
          balance += amount;
          return true;
     }

private:
     string name;
     double balance = 0;
};

int main() {
     Account kimAccount;
     kimAccount.Withdraw(100);
     return 0;
}