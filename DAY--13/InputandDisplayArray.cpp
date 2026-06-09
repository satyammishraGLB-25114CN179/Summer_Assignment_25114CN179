#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
   cout<<"Start entering numbers : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Given array is : ";
    for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
    }
    return 0;
}