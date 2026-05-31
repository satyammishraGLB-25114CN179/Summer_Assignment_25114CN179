#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int y,x=0,s=0,n;
    cout<<"Enter a number= ";
    cin>>n;
    int z=n;
    int temp=n;
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
        cout<<z<<"=is armstrong number";
    }
    else{

        cout<<z<<"=is not an armstrong number";
    }
}