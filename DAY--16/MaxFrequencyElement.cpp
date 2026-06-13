#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"ENTER number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element's :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxCount = 0;
    int maxElement = arr[0];

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            maxElement = arr[i];
        }
    }
    cout<<"Max frequency element is "<<maxElement<<" with frequency "<<maxCount;
    return 0;
}