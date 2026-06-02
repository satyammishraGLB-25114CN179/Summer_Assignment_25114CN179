#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter binary number";
    cin>>n;
    int x=0,y=1;
    while(n!=0){
        int ld=n%10;
x+=ld*y;
y=y*2;
        n/=10;
    
    }
    cout<<"Decimal no is="<<x;
    return 0;
}