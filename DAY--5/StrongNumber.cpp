#include<iostream>
using namespace std;
int main(){
    int z=0, x,n;
    cout<<"Enter a number=";
    cin>>n;
     int w=n;
    while(w!=0){
        x=w%10;
        w=w/10;
        int y=1;
        for(int i=1;i<=x;i++){
            y=y*i;
        }
        z=z+y;
    }
    if(z==n){
        cout<<"This is a strong number";
     } else{
            cout<<"This is not strong number";
        }
        return 0;
    }
