#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> library;
    string choice, title, author;

    while (true) {
        cout << "\n1. Add Book\n2. View Books\n3. Remove Book\n4. Exit\nChoice: ";
        getline(cin, choice);

        if (choice == "1") {
            cout << "Book Title: ";
            getline(cin, title);
            cout << "Author: ";
            getline(cin, author);
            library[title] = author;
        } else if (choice == "2") {
            for (auto const& [key, val] : library) {
                cout << "\"" << key << "\" by " << val << "\n";
            }
        } else if (choice == "3") {
            cout << "Book Title to remove: ";
            getline(cin, title);
            library.erase(title);
        } else if (choice == "4") {
            break;
        }
    }
    return 0;
}