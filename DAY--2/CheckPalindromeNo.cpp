#include<iostream>
using namespace std;
int main(){
    int n,x,y=0;
    cout<<"Enter a number=";
    cin>>n;
    int z=n;
while(n!=0){
    x=n%10;
y=y*10+x;
    n=n/10;
}
if(z==y){
cout<<"given number is palindrome";}
else{
cout<<"NOT a Palindrome no";}
return 0;
}