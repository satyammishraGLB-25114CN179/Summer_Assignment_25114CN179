#include <iostream>
#include <string>
using namespace std;

int main() {
    string itemNames[50];
    double itemPrices[50];
    int itemQuantities[50];
    int count = 0;
    int choice;

    while (true) {
        cout << "1. Add Item\n2. View Inventory\n3. Update Quantity\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter item name: ";
            cin >> itemNames[count];
            cout << "Enter item price: ";
            cin >> itemPrices[count];
            cout << "Enter item quantity: ";
            cin >> itemQuantities[count];
            count++;
            cout << "Item added to inventory.\n\n";
        } else if (choice == 2) {
            if (count == 0) {
                cout << "Inventory is empty.\n\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "Name: " << itemNames[i] << " | Price: $" << itemPrices[i] << " | Qty: " << itemQuantities[i] << "\n";
                }
                cout << "\n";
            }
        } else if (choice == 3) {
            string searchName;
            cout << "Enter item name to update: ";
            cin >> searchName;
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (itemNames[i] == searchName) {
                    cout << "Enter new quantity: ";
                    cin >> itemQuantities[i];
                    found = 1;
                    cout << "Quantity updated successfully.\n\n";
                    break;
                }
            }
            if (found == 0) {
                cout << "Item not found in inventory.\n\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}