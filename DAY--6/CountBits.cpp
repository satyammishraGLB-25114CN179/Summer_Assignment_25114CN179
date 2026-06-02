#include<iostream>
using namespace std;
int main(){
   int n,count=0;
    cout<<"Enter a Decimal number";
    cin>>n;
    int temp=n;
     int x=0,y=1;
    while(temp>0){
        int ld=temp%2;
x+=ld*y;
y=y*10;
        temp/=2;
    
    }
    while(x>0){
        int ld=x%10;
x/=10;
if(ld==1){
count++;
}
    }
    cout<<"No of bits is= "<<count;
    return 0;
}