#include <iostream>
#include <string>
using namespace std;

string productNames[50];
int productIds[50];
int productStock[50];
int totalProducts = 0;

void addProduct() {
    cout << "Enter product ID: ";
    cin >> productIds[totalProducts];
    cout << "Enter product name: ";
    cin >> productNames[totalProducts];
    cout << "Enter product stock: ";
    cin >> productStock[totalProducts];
    totalProducts++;
    cout << "Product added successfully.\n\n";
}

void displayProducts() {
    if (totalProducts == 0) {
        cout << "Inventory is empty.\n\n";
    } else {
        for (int i = 0; i < totalProducts; i++) {
            cout << "ID: " << productIds[i] << " | Name: " << productNames[i] << " | Stock: " << productStock[i] << "\n";
        }
        cout << "\n";
    }
}

void updateStock() {
    int searchId;
    cout << "Enter product ID to update stock: ";
    cin >> searchId;
    int found = 0;
    for (int i = 0; i < totalProducts; i++) {
        if (productIds[i] == searchId) {
            int newStock;
            cout << "Enter new stock amount: ";
            cin >> newStock;
            productStock[i] = newStock;
            found = 1;
            cout << "Stock updated.\n\n";
            break;
        }
    }
    if (found == 0) {
        cout << "Product not found.\n\n";
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add Product\n2. Display Products\n3. Update Stock\n4. Exit\nEnter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            addProduct();
        } else if (choice == 2) {
            displayProducts();
        } else if (choice == 3) {
            updateStock();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}