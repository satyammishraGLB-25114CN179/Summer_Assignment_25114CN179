#include<iostream>
using namespace std;
int main(){
    int lcm,i,j=1,x,y,a,b;
    cout<<"Enter first no= ";
    cin>>a;
    cout<<"Enter second no= ";
    cin>>b;
    if(a>b){
        x=a;
        y=b;
    }
    else{
        x=b;
        y=a;
    }
    for(i=1; i<=x;i++){
        if(y%i==0 && x%i==0){
            if(j<i){
                j=i;
            }
        }
       
    } lcm=(a*b)/j;
    cout<<"LCM is="<<lcm;
    return 0;
}