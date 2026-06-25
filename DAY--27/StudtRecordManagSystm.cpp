#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
};

Student list[20];
int countStu = 0;

int findStudent(int id) {
    for (int i = 0; i < countStu; i++)
        if (list[i].id == id) return i;
    return -1;
}

void addStudent() {
    if (countStu == 20) {
        cout << "Cannot add more students.\n";
        return;
    }
    cout << "Enter ID: ";
    cin >> list[countStu].id;
    if (findStudent(list[countStu].id) != -1) {
        cout << "ID already exists.\n";
        return;
    }
    cout << "Enter name: ";
    cin >> list[countStu].name;
    cout << "Enter age: ";
    cin >> list[countStu].age;
    countStu++;
    cout << "Student added.\n";
}

void showStudents() {
    if (countStu == 0) {
        cout << "No students yet.\n";
        return;
    }
    cout << "ID Name Age\n";
    for (int i = 0; i < countStu; i++)
        cout << list[i].id << " " << list[i].name << " " << list[i].age << "\n";
}

void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    int idx = findStudent(id);
    if (idx == -1) {
        cout << "Not found.\n";
        return;
    }
    cout << "Name: " << list[idx].name << " Age: " << list[idx].age << "\n";
}

int main() {
    int choice;
    do {
        cout << "\n1.Add 2.Show 3.Search 4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addStudent();
        else if (choice == 2) showStudents();
        else if (choice == 3) searchStudent();
        else if (choice == 4) cout << "Bye\n";
        else cout << "Invalid option.\n";
    } while (choice != 4);
    return 0;
}
