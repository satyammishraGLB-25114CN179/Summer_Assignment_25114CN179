#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m, n,target;
    cout<<"Enter Number of element";
    cin>>n;
    vector< int > arr(n);
    cout<<"Start entering elemnts of array : \n";
    for(m=0;m<n;m++){
        cin>>arr[m];

    }
    cout<<"ENter target value : ";
    cin>>target;
    sort(arr.begin(), arr.end());
int i=0,j=n-1;
cout<<"Pairs are : ";
while(i<j){
    int sum=arr[i]+arr[j];
    if(sum==target){
        cout<<"("<<arr[i]<<","<<arr[j]<<")";
        i++;
        j--;
    }
    else if(sum<target) i++;
    else j--;
}
return 0;
}