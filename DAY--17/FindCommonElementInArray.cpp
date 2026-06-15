#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arrayA = {1, 3, 5, 7, 9};
    vector<int> arrayB = {2, 3, 6, 7, 8};

    cout << "Common elements: ";

    for (int i = 0; i < arrayA.size(); i++) {
        for (int j = 0; j < arrayB.size(); j++) {
            if (arrayA[i] == arrayB[j]) {
                cout << arrayA[i] << " ";
                break;
            }
        }
    }
    
    cout << endl;
    return 0;
}