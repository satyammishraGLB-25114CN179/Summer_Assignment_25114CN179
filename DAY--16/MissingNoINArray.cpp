#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m, n,target;
    cout<<"Enter Number of element";
    cin>>n;
    vector< int > arr(n);
    cout<<"Start entering elemnts of array : \n";
    for(m=0;m<n;m++){
        cin>>arr[m];

    }
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ (n+1);
    cout<<"Missing no is : "<< (xor1 ^ xor2);
    return 0;
}