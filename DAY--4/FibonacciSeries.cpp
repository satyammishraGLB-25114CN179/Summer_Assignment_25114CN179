#include<iostream>
using namespace std;
int main(){
    int fn,f1=1,f0=0,i,n;
    cout<<"Enter no of terms= ";
    cin>>n;
    for(i=0;i<=n;i++){
        fn=f0+f1;
f0=f1;
f1=fn;

cout<<fn<<" ";
    }
    return 0;
}