#include <iostream>
using namespace std;

class Account {
private:
    int id;
    double balance;
    double annualInterestRate;

public:
    Account() {
        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
    }

    Account(int id, double balance, double annualInterestRate) {
        this->id = id;
        this->balance = balance;
        this->annualInterestRate = annualInterestRate;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double balance) {
        this->balance = balance;
    }

    double getAnnualInterestRate() {
        return annualInterestRate;
    }

    void setAnnualInterestRate(double annualInterestRate) {
        this->annualInterestRate = annualInterestRate;
    }

    double getMonthlyInterestRate() {
        return annualInterestRate / 12;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    Account acc;

    int id;
    double balance, rate;

    cout << "Enter account ID: ";
    cin >> id;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    acc.setId(id);
    acc.setBalance(balance);
    acc.setAnnualInterestRate(rate);

    acc.withdraw(2500);
    acc.deposit(3000);

    cout << "\nAccount Information\n";
    cout << "-------------------\n";
    cout << "ID: " << acc.getId() << endl;
    cout << "Balance: $" << acc.getBalance() << endl;
    cout << "Monthly Interest Rate: "
         << acc.getMonthlyInterestRate() << "%" << endl;

    return 0;
}
