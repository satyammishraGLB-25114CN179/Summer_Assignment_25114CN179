#include<iostream>
using namespace std;
void armstrong(int n){
    int y;
 for(int i=1;i<=n;i++){
        int x=0,s=0;
        int temp=i,z=i;
    while(temp!=0){
    temp/=10;
    x++;
    }
temp=z;
 while(temp!=0){
       y=temp%10;
       s=s+round(pow(y,x));
         temp=temp/10;
         
    }
    if(s ==z){
        cout<<z<<" ";
    }
}}
int main(){
    int n;
    cout<<"Enter Upper limit : ";
    cin>>n;
    cout<<"armstrong no's are :";
    armstrong(n);
    return 0;
}