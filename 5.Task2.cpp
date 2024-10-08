#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables for the bank balance, deposit, withdrawal, and interest rate
    float balance, deposit, withdrawal;

    // Step 2: Get the initial balance, deposit, withdrawal, and interest rate from the user
    cout << "Enter the initial balance: ";
    cin >> balance;

    cout << "Enter the deposit amount: ";
    cin >> deposit;

    cout << "Enter the withdrawal amount: ";
    cin >> withdrawal;


    // Step 3: Apply the operations using assignment operators
    balance += deposit; // Deposit amount to the balance
    cout << "Balance after deposit: " << balance << endl;

    balance -= withdrawal; // Withdraw amount from the balance
    cout << "Balance after withdrawal: " << balance << endl;

    return 0;
}

