#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    cout<<"Enter a number=";
    cin>>n;
while(n!=0){
    n/=10;
    x++;
}
cout<<"Total didgit="<<x<<endl;
return 0;
}