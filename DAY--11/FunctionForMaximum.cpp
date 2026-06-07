#include <iostream>
using namespace std;
int maximum(int max,int num){
    if(max>num) return max;
    else return num;
}


int main() {
    int n;
    cout << "Enter total Numbers=";
    cin >> n;
    int num;
    int max=0;
    for(int i=1;i<=n;i++){
        cout<<"Enter number :"<<i<<"=";
        cin>>num;
max=maximum(max,num);
    }
    cout << "Maximum value is = " <<max;
    return 0;
}