#include<iostream>
using namespace std;
void prime(int n){
    int i,j;
    for(i=0; i<=n; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout <<i<< " ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number=";
    cin >> n;
    cout << "prime nos are = ";
    prime(n);
    return 0;
}