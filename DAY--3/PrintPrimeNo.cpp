#include<iostream>
using namespace std;
int main(){
    int i,j,a,b;
    cout<<"Enter lower range=";
    cin>>a;
    cout<<"Enter uppper range=";
    cin>> b;
    for(i =a ; i <=b ; i++ ){
        
        for(j=2; j<i; j++){
if(i%j==0){
    break;}

   
}
    if(i==j){
cout<< i <<" \n";
    }
    }
    return 0;
}
