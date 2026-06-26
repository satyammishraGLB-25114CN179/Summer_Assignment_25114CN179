#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> bookings;
    string choice, name, seat;

    while (true) {
        cout << "\n1. Book Ticket\n2. View Bookings\n3. Cancel Ticket\n4. Exit\nChoice: ";
        getline(cin, choice);

        if (choice == "1") {
            cout << "Passenger Name: ";
            getline(cin, name);
            cout << "Seat Number: ";
            getline(cin, seat);
            bookings[seat] = name;
        } else if (choice == "2") {
            for (auto const& [key, val] : bookings) {
                cout << "Seat " << key << ": " << val << "\n";
            }
        } else if (choice == "3") {
            cout << "Seat Number to cancel: ";
            getline(cin, seat);
            bookings.erase(seat);
        } else if (choice == "4") {
            break;
        }
    }
    return 0;
}