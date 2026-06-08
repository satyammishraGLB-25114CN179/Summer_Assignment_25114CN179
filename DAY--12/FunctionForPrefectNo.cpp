#include<iostream>
using namespace std;
void Perfectno(int n){
    int x=0;
   for(int i=1;i<n;i++){
        if(n%i==0){
             x=x+i;
        }
        
    }
        if(x==n){
            cout<<"\nTHIS ia a perfect NUMBER";
        }
        else{
            cout<<"\nThis is not a perfect NUMBER";
        }
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   Perfectno(n);
    return 0;
}