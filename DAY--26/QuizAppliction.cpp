#include <iostream>
#include <string>

using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "=== WELCOME TO THE SWITCH-CASE QUIZ ===" << endl;

    // Loop through 3 questions
    for (int questionNum = 1; questionNum <= 3; questionNum++) {
        
        switch (questionNum) {
            case 1:
                cout << "\nQuestion 1: What is the capital of France?" << endl;
                cout << "A. Berlin\nB. Madrid\nC. Paris\nD. Rome" << endl;
                cout << "Your answer: ";
                cin >> answer;
                
                if (toupper(answer) == 'C') {
                    cout << "Correct!" << endl;
                    score++;
                } else {
                    cout << "Wrong! The correct answer is C." << endl;
                }
                break;

            case 2:
                cout << "\nQuestion 2: Which language is a 'compiled' system language?" << endl;
                cout << "A. Python\nB. C++\nC. JavaScript\nD. HTML" << endl;
                cout << "Your answer: ";
                cin >> answer;

                if (toupper(answer) == 'B') {
                    cout << "Correct!" << endl;
                    score++;
                } else {
                    cout << "Wrong! The correct answer is B." << endl;
                }
                break;

            case 3:
                cout << "\nQuestion 3: How many elements are in the periodic table? (Traditional baseline)" << endl;
                cout << "A. 92\nB. 100\nC. 118\nD. 150" << endl;
                cout << "Your answer: ";
                cin >> answer;

                if (toupper(answer) == 'C') {
                    cout << "Correct!" << endl;
                    score++;
                } else {
                    cout << "Wrong! The correct answer is C." << endl;
                }
                break;
        }
    }

    // Final Score Output
    cout << "\n=== QUIZ OVER ===" << endl;
    cout << "Your final score: " << score << " out of 3" << endl;

    return 0;
}