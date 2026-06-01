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
        if(x==n){
            cout<<"\nTHIS ia a perfect NUMBER";
        }
        else{
            cout<<"\nThis is not a perfect NUMBER";
        }
    
return 0;
}