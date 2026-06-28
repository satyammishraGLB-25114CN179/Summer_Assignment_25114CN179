#include <iostream>
#include <string>
using namespace std;

int main() {
    int empIds[50];
    string empNames[50];
    double empSalaries[50];
    int count = 0;
    int choice;

    while (true) {
        cout << "1. Add Employee\n2. View All Employees\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Employee ID: ";
            cin >> empIds[count];
            cout << "Enter Employee Name: ";
            cin >> empNames[count];
            cout << "Enter Employee Salary: ";
            cin >> empSalaries[count];
            count++;
            cout << "Employee added.\n\n";
        } else if (choice == 2) {
            if (count == 0) {
                cout << "No employees to display.\n\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << empIds[i] << " | Name: " << empNames[i] << " | Salary: " << empSalaries[i] << "\n";
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