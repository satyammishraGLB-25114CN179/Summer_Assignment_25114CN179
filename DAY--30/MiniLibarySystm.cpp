#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookNames[100];
    int bookStatus[100]; 
    int count = 0;
    int choice;

    while (true) {
        cout << "1. Add Book\n2. Borrow Book\n3. Return Book\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookNames[count];
            bookStatus[count] = 1; 
            count++;
            cout << "Book added.\n\n";
        } else if (choice == 2) {
            string searchName;
            cout << "Enter book name to borrow: ";
            cin >> searchName;
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (bookNames[i] == searchName && bookStatus[i] == 1) {
                    bookStatus[i] = 0;
                    found = 1;
                    cout << "Book borrowed successfully.\n\n";
                    break;
                }
            }
            if (found == 0) {
                cout << "Book not available or doesn't exist.\n\n";
            }
        } else if (choice == 3) {
            string searchName;
            cout << "Enter book name to return: ";
            cin >> searchName;
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (bookNames[i] == searchName && bookStatus[i] == 0) {
                    bookStatus[i] = 1;
                    found = 1;
                    cout << "Book returned successfully.\n\n";
                    break;
                }
            }
            if (found == 0) {
                cout << "Invalid return operation.\n\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}