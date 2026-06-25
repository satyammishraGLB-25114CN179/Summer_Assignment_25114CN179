#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

Employee list[20];
int countEmp = 0;

int findEmp(int id) {
    for (int i = 0; i < countEmp; i++)
        if (list[i].id == id) return i;
    return -1;
}

void addEmployee() {
    if (countEmp == 20) {
        cout << "Cannot add more employees.\n";
        return;
    }
    cout << "Enter ID: ";
    cin >> list[countEmp].id;
    if (findEmp(list[countEmp].id) != -1) {
        cout << "ID already exists.\n";
        return;
    }
    cout << "Enter name: ";
    cin >> list[countEmp].name;
    cout << "Enter salary: ";
    cin >> list[countEmp].salary;
    countEmp++;
    cout << "Employee added.\n";
}

void showSalaries() {
    if (countEmp == 0) {
        cout << "No employees yet.\n";
        return;
    }
    cout << "ID Name Salary\n";
    for (int i = 0; i < countEmp; i++)
        cout << list[i].id << " " << list[i].name << " " << list[i].salary << "\n";
}

void searchEmployee() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    int idx = findEmp(id);
    if (idx == -1) {
        cout << "Not found.\n";
        return;
    }
    cout << "Name: " << list[idx].name << " Salary: " << list[idx].salary << "\n";
}

int main() {
    int choice;
    do {
        cout << "\n1.Add 2.Show 3.Search 4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addEmployee();
        else if (choice == 2) showSalaries();
        else if (choice == 3) searchEmployee();
        else if (choice == 4) cout << "Bye\n";
        else cout << "Invalid option.\n";
    } while (choice != 4);
    return 0;
}
