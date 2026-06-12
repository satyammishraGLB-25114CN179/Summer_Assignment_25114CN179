#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i,j, n;
    cout<<"Enter Number of element";
    cin>>n;
    vector< int > arr(n);
    vector<int >temp(n);
    cout<<"Start entering elemnts of array : \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
 }
 int d;
 cout<<"Enter places to shift : ";
 cin>>d;
 for(int i=0;i<n;i++){
     temp[(i-d+n)%n]=arr[i];
 }
 
 cout<<"Rotated array is: ";
 for(int i=0;i<n;i++){
     cout<<temp[i]<<" ";
 }
 cout<<"\n";
    return 0;
}