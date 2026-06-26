#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> contacts;
    string choice, name, phone;

    while (true) {
        cout << "\n1. Add\n2. View\n3. Delete\n4. Exit\nChoice: ";
        getline(cin, choice);

        if (choice == "1") {
            cout << "Name: ";
            getline(cin, name);
            cout << "Phone: ";
            getline(cin, phone);
            contacts[name] = phone;
        } else if (choice == "2") {
            for (auto const& [key, val] : contacts) {
                cout << key << ": " << val << "\n";
            }
        } else if (choice == "3") {
            cout << "Name to delete: ";
            getline(cin, name);
            contacts.erase(name);
        } else if (choice == "4") {
            break;
        }
    }
    return 0;
}