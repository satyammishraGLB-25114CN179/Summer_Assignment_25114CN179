#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    vector<int> unionArr = arr1;
    for (int num : arr2) {
        bool isDuplicate = false;
        for (int existing : unionArr) {
            if (num == existing) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr.push_back(num);
        }
    }
    for (int num : unionArr) {
   cout << num << " ";
    }
    cout << endl;
    return 0;
}