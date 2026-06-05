#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(char)(64+i);
        }
        cout<<"\n";
    }
    return 0;
}