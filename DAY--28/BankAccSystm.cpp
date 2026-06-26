#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string accountType;
    int accountNumber;
    double balance = 0.0;
    int choice;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accountNumber;
    cin.ignore();
    cout << "Enter account type (Savings/Current): ";
    getline(cin, accountType);

    while (true) {
        cout << "\nBank Account Menu\n";
        cout << "1. Show Account Details\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        }

        if (choice == 1) {
            cout << "\nAccount Holder: " << name << '\n';
            cout << "Account Number: " << accountNumber << '\n';
            cout << "Account Type: " << accountType << '\n';
            cout << "Balance: " << balance << '\n';
        } else if (choice == 2) {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (!cin) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                amount = -1;
            }
            if (amount > 0) {
                balance += amount;
                cout << "Amount deposited successfully. New balance: " << balance << '\n';
            } else {
                cout << "Enter a valid amount." << '\n';
            }
        } else if (choice == 3) {
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (!cin) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                amount = -1;
            }
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Amount withdrawn successfully. Remaining balance: " << balance << '\n';
            } else {
                cout << "Insufficient balance or invalid amount." << '\n';
            }
        } else if (choice == 4) {
            cout << "Exiting the system. Thank you." << '\n';
            break;
        } else {
            cout << "Please choose a valid option." << '\n';
        }
    }

    return 0;
}
