#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a no=";
    cin>>n;
    for(int i=1;i<=n;i++){
      if(n%i==0 || n%i==n){
            count++;}
        }

    
    if(count==2){
        cout<<"GIVEN NO IS PRIME NO";
    }else{
            cout<<"THIS IS NOT A PRIME NUMBER";
        
    }
    return 0;}
