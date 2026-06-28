#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    while (true) {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 5) {
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << num1 + num2 << "\n\n";
        } else if (choice == 2) {
            cout << "Result: " << num1 - num2 << "\n\n";
        } else if (choice == 3) {
            cout << "Result: " << num1 * num2 << "\n\n";
        } else if (choice == 4) {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << "\n\n";
            } else {
                cout << "Error: Division by zero\n\n";
            }
        } else {
            cout << "Invalid choice\n\n";
        }
    }
    return 0;
}