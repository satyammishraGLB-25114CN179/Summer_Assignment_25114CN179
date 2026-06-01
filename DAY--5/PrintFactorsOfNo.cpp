#include<iostream>
using namespace std;
int main(){
    int x=0,n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"factors are= ";
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
             x=x+i;
        }
    }
    return 0;
}