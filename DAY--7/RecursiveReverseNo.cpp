#include<iostream>
using namespace std;
int rev(int n,int ans){
if(n==0)return ans;
int x=n%10;
return rev(n/10,ans*10+x);
}
int reverse(int n){
return rev(n,0);
}
int main (){
int n;
cout<<"Enter a number";
cin>>n;
cout<<"reverse no is"<<reverse(n);
return 0;
}