#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarysearch(vector<int> &arr, int low, int high, int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(target>arr[mid]){
        return binarysearch(arr,mid+1,high,target);
    }
    return binarysearch(arr,low,mid-1,target);
}
int search(vector<int> &arr,int target){ 
    return binarysearch(arr,0,arr.size()-1,target);
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int index = search(arr,target);
    if(index >= 0)
        cout<<"Target is at : "<<index<<"\n";
    else
        cout<<"Target not found."<<"\n";

    return 0;
}