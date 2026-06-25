#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

Employee list[20];
int countEmp = 0;

int findId(int id) {
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
    if (findId(list[countEmp].id) != -1) {
        cout << "ID already used.\n";
        return;
    }
    cout << "Enter name: ";
    cin >> list[countEmp].name;
    cout << "Enter department: ";
    cin >> list[countEmp].department;
    cout << "Enter salary: ";
    cin >> list[countEmp].salary;
    countEmp++;
    cout << "Employee added.\n";
}

void showEmployees() {
    if (countEmp == 0) {
        cout << "No employees yet.\n";
        return;
    }
    cout << "ID Name Department Salary\n";
    for (int i = 0; i < countEmp; i++)
        cout << list[i].id << " " << list[i].name << " " << list[i].department << " " << list[i].salary << "\n";
}

void searchEmployee() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    int idx = findId(id);
    if (idx == -1) {
        cout << "Not found.\n";
        return;
    }
    cout << "Found: " << list[idx].name << " " << list[idx].department << " " << list[idx].salary << "\n";
}

void deleteEmployee() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    int idx = findId(id);
    if (idx == -1) {
        cout << "Not found.\n";
        return;
    }
    for (int i = idx; i + 1 < countEmp; i++)
        list[i] = list[i + 1];
    countEmp--;
    cout << "Deleted.\n";
}

int main() {
    int choice;
    do {
        cout << "\n1.Add 2.Show 3.Search 4.Delete 5.Exit\n";
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1) addEmployee();
        else if (choice == 2) showEmployees();
        else if (choice == 3) searchEmployee();
        else if (choice == 4) deleteEmployee();
        else if (choice == 5) cout << "Bye\n";
        else cout << "Invalid option.\n";
    } while (choice != 5);
    return 0;
}
