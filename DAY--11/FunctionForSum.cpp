#include<iostream>
using namespace std;
int sum(int n){
    int total=0;
    while(n!=0){
    if(n==0){
        return 0;
    }
total=total+n;
n--;
    }
return total;
    }
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int z=sum(n);
    cout<<"Sum of no is "<< z;
    return 0;
}