#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element's :\n";
    int lgst=INT_MIN,slgst;
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    for(int i=0;i<n;i++){
if(arr[i]>lgst){
     slgst=lgst;
    lgst=arr[i];
}
    }
    cout<<"second largest element is : "<<slgst;
    return 0;

}