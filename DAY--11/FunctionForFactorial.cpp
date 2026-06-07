#include<iostream>
using namespace std;
int factorial(int n){
        int temp=1;
while(n!=0){
    temp*=n;
    n--;
}
return temp;
}
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int fact=factorial(n);
    cout<<"Fcatorial of no's is ="<<fact;
    return 0;
}