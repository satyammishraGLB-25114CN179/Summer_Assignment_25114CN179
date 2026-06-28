#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "";
    string str2 = "";
    int choice;

    while (true) {
        cout << "1. Input Base String\n2. String Length\n3. Concatenate String\n4. Compare String\n5. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter string: ";
            cin >> str1;
            cout << "String saved.\n\n";
        } else if (choice == 2) {
            cout << "Length of string: " << str1.length() << "\n\n";
        } else if (choice == 3) {
            cout << "Enter second string to concatenate: ";
            cin >> str2;
            cout << "Result: " << str1 + str2 << "\n\n";
        } else if (choice == 4) {
            cout << "Enter second string to compare: ";
            cin >> str2;
            if (str1 == str2) {
                cout << "Strings are equal.\n\n";
            } else {
                cout << "Strings are not equal.\n\n";
            }
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}