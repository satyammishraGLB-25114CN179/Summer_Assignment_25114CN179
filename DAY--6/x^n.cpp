#include<iostream>
using namespace std;
int main(){
long long n,x;
cout<<"Enter value";
cin>>x;
cout<<"Enter power";
cin>>n;

long long z=1;
for(int i=1;i<=n;i++){
    z=z*x;
}
cout<<"Answer is="<<z;
return 0;
}