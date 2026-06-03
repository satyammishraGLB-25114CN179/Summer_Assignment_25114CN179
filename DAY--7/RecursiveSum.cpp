#include<iostream>
using namespace std;
int sum(int n){
    if(n <1){
        return 0;
    }
    return n +sum(n-1);
}
int main(){
    int n;
    cout<<"Enter nth number";
    cin>>n;
    int ans=sum(n);
    cout << "Sum is "<< ans;
    return 0;
}