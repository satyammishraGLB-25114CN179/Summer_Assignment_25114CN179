#include<iostream>
using namespace std;
int main(){
    int y=1,n,x;
    cout<<"Enter a number=";
    cin>>n;
    while(n!=0){
        x=n%10;
        y=y*x;
        n=n/10;
    }
      cout<<"product of didgits are="<<y<<endl;
    return 0;
}