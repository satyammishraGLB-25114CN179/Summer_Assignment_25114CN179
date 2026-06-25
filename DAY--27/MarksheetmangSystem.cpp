#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int marks[3];
};

Student students[20];
int studentCount = 0;

int findStudent(int id) {
    for (int i = 0; i < studentCount; i++)
        if (students[i].id == id) return i;
    return -1;
}

void addStudent() {
    if (studentCount == 20) {
        cout << "Cannot add more students.\n";
        return;
    }
    cout << "Enter ID: ";
    cin >> students[studentCount].id;
    if (findStudent(students[studentCount].id) != -1) {
        cout << "ID already exists.\n";
        return;
    }
    cout << "Enter name: ";
    cin >> students[studentCount].name;
    cout << "Enter marks for 3 subjects: ";
    cin >> students[studentCount].marks[0] >> students[studentCount].marks[1] >> students[studentCount].marks[2];
    studentCount++;
    cout << "Student added.\n";
}

void showMarksheets() {
    if (studentCount == 0) {
        cout << "No students yet.\n";
        return;
    }
    cout << "ID Name M1 M2 M3 Total%\n";
    for (int i = 0; i < studentCount; i++) {
        int total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        double percent = total / 3.0;
        cout << students[i].id << " " << students[i].name << " "
             << students[i].marks[0] << " " << students[i].marks[1] << " " << students[i].marks[2]
             << " " << total << " " << percent << "\n";
    }
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
    int total = students[idx].marks[0] + students[idx].marks[1] + students[idx].marks[2];
    double percent = total / 3.0;
    cout << "Name: " << students[idx].name << "\n";
    cout << "Marks: " << students[idx].marks[0] << " " << students[idx].marks[1] << " " << students[idx].marks[2] << "\n";
    cout << "Total: " << total << " Percentage: " << percent << "\n";
}

int main() {
    int choice;
    do {
        cout << "\n1.Add 2.Show 3.Search 4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addStudent();
        else if (choice == 2) showMarksheets();
        else if (choice == 3) searchStudent();
        else if (choice == 4) cout << "Bye\n";
        else cout << "Invalid option.\n";
    } while (choice != 4);
    return 0;
}
