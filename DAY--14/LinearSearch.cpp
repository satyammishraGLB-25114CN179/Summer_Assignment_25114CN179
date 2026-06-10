#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cout<<"ENTER number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element's :\n";
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    cout<<"Enter element to search : ";
    cin>>x;
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Given elemnt is at : "<<i+1;
        }
    }
    return 0;
}