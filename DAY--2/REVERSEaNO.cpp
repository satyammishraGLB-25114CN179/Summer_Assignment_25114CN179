#include<iostream>
using namespace std;
int main(){
    int n,x,y=0;
    cout<<"enter a number=";
    cin>>n;
    
    while(n!=0){
        x=n%10;
        y=y*10+x;
        n=n/10;
    }
    cout<<"reversed no is="<<y<<endl;
    return 0;
}