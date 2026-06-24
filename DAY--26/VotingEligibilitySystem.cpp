#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string citizen;

    cout << "=== Voting Eligibility System ===" << endl;

    // 1. Get user input for age
    cout << "Enter your age: ";
    cin >> age;

    // 2. Get user input for citizenship
    cout << "Are you a citizen? (yes/no): ";
    cin >> citizen;

    // 3. Evaluate eligibility
    if (age >= 18 && (citizen == "yes" || citizen == "Yes")) {
        cout << "\nSuccess: You are eligible to vote!" << endl;
    } else {
        cout << "\nDenied: You are not eligible to vote." << endl;
        
        // Provide feedback on why they failed
        if (age < 18) {
            cout << "- You must be at least 18 years old." << endl;
        }
        if (citizen != "yes" && citizen != "Yes") {
            cout << "- You must be a citizen to vote." << endl;
        }
    }

    return 0;
}