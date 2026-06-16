#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Sorted array in descending order: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
