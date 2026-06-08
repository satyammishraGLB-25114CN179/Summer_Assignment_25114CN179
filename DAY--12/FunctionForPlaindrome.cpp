#include<iostream>
using namespace std;
void Palindrome(int n){
    int x,y=0;
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
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   Palindrome(n);
    return 0;
}