/* Q.2 Class for Bank Account
- Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private. */

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:

    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } 
    }

    // Function to deposit 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: $" << amount << endl;
            } else {
                cout << "Insufficient balance !" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    //  check the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount account(1000.0);

 
    cout << "Initial balance: $" << account.getBalance() << endl;


    account.deposit(500);   // Deposit $500
    cout << "Current balance: $" << account.getBalance() << endl;

    account.withdraw(200);  // Withdraw $200
    cout << "Current balance: $" << account.getBalance() << endl;

    account.withdraw(1500); // Attempt to withdraw more than balance
    cout << "Current balance: $" << account.getBalance() << endl;

   
}
