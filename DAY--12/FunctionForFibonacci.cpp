#include<iostream>
using namespace std;
void Fibonacci(int n){
    int fn,f1=1,f0=0,i;
    for(i=0;i<=n;i++){
        fn=f0+f1;
f0=f1;
f1=fn;

cout<<fn<<" ";
}
}
int main(){
    int n;
    cout<<"Enter Upper limit : ";
    cin>>n;
    cout<<"FIBONACCI series is :";
   Fibonacci(n);
    return 0;
}