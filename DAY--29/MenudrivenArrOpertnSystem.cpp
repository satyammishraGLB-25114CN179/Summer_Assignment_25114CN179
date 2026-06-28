#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while (true) {
        cout << "1. Add Element\n2. Display Array\n3. Search Element\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size < 100) {
                cout << "Enter element: ";
                cin >> arr[size];
                size++;
                cout << "Element added.\n\n";
            } else {
                cout << "Array is full.\n\n";
            }
        } else if (choice == 2) {
            if (size == 0) {
                cout << "Array is empty.\n\n";
            } else {
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n\n";
            }
        } else if (choice == 3) {
            int key;
            int found = 0;
            cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < size; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << "\n\n";
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "Element not found.\n\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n\n";
        }
    }
    return 0;
}