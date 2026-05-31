#include<iostream>
using namespace std;
int main(){
    int fn,f1=1,f0=0,i,n;
    cout<<"Enter th term= ";
    cin>>n;
    for(i=0;i<=n;i++){
        fn=f0+f1;
f0=f1;
f1=fn;
    }
    cout<<fn<<"=is the"<<n<<"th fibonacci term";
    return 0;
}