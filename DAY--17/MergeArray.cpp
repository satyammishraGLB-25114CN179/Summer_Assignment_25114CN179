#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int n=arr1.size();
    int m=arr2.size();
    merged.reserve(n + m); 
    int i = 0; 
    int j = 0; 
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    vector<int> arrayA = {1, 3, 5, 7};
    vector<int> arrayB = {2, 4, 6, 8, 9};
    vector<int> result = mergeSortedArrays(arrayA, arrayB);
    cout << "Merged Array: ";
    for (int num : result) {
        cout<<num<<" ";
    }
    cout << endl;

    return 0;
}