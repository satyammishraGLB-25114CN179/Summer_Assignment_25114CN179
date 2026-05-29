#include<iostream>
using namespace std;
int main(){
    int n,x,y=0;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0){
       x=n%10;
        y=y+x;
         n=n/10;
    }
    cout<<"sum of digit is="<<y<<endl;
    return 0;
}