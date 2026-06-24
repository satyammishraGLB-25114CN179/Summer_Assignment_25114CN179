#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00; // Starting balance
    int choice;
    double amount;

    do {
        // Display Menu
        cout << "\n===== ATM SIMULATION =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully." << endl;
                } else {
                    cout << "Invalid amount." << endl;
                }
                break;
            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient funds! Transaction canceled." << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount." << endl;
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully." << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4); // Keep running until user chooses to Exit

    return 0;
}