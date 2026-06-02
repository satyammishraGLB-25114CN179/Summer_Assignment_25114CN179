#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter decimal number";
    cin>>n;
    int x=0,y=1;
    while(n>0){
        int ld=n%2;
x+=ld*y;
y=y*10;
        n/=2;
    
    }
    cout<<"Binary no is="<<x;
    return 0;
}