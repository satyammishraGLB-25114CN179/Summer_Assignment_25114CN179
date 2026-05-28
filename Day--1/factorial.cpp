#include<iostream>
using namespace std;
int main(){
    int n ,x=1;
    cout<<"give the number";
    cin>>n;
    for(int i=1;i<=n;i++){
    x=x*i;
    }
    cout<<"factorial is="<<x<<endl;
return 0;}
