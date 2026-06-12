#include<iostream>
#include<vector>
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
    cout<<"Reverse elements are : ";
    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}