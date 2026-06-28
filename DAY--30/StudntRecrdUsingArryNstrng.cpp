#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentNames[100];
    int rollNumbers[100];
    int marks[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "1. Add Student\n2. View Students\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter student name: ";
            cin >> studentNames[count];
            cout << "Enter roll number: ";
            cin >> rollNumbers[count];
            cout << "Enter marks: ";
            cin >> marks[count];
            count++;
            cout << "Student added successfully.\n\n";
        } else if (choice == 2) {
            if (count == 0) {
                cout << "No records found.\n\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "Name: " << studentNames[i] << " | Roll No: " << rollNumbers[i] << " | Marks: " << marks[i] << "\n";
                }
                cout << "\n";
            }
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}