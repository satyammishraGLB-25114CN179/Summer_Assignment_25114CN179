#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"ENTER number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element's :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to find frequency: ";
    cin>>target;

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"Frequency of "<<target<<"is : "<<count;
    return 0;
}