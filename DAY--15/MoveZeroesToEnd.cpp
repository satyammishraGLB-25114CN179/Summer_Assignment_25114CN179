#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i,j, n;
    cout<<"Enter Number of element";
    cin>>n;
    vector< int > arr(n);
    cout<<"Start entering elemnts of array : \n";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    int writeIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
       arr[writeIndex] = arr[i];
       writeIndex++;
        }
    }
    while (writeIndex < n) {
        arr[writeIndex] = 0;
               writeIndex++;
    }
cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}