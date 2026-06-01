#include<iostream>
using namespace std;
int main(){
    int n,i;
     int z=1;
    cout<<"Entre a number";
    cin>>n;
    for(i=2;i<=n;i++){
       
        if(n%i==0){
            if(z<i){
                z=i;
            }
            n=n/i;
            i--;
        
        }

    }
    cout<<"Largest prime factor is="<<z;
}