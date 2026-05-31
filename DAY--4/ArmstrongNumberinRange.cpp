#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int y,a,b;
    cout<<"Enter uppper range = ";
    cin>>a;
     cout<<"Enter lower range = ";
    cin>>b;
    for(int i=a;i<=b;i++){
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
}
        return 0;
}