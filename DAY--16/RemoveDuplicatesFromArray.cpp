#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter Number of element";
    cin>>n;
    vector< int > arr(n);
    cout<<"Start entering elemnts of array : \n";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr.begin(), arr.end());
    int j=0;
    for(int k=1;k<n;k++){
if(arr[j]!=arr[k]){
    arr[j+1]=arr[k];
    j++;
}
    }
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}