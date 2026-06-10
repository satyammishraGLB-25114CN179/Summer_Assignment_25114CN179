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
    cout<<"Duplicates are : ";
    vector<bool> printed(n, false);
  for(int i=0; i<n; i++){
        if(printed[i])
            continue;
bool isDuplicate = false;
        for(int j=i+1; j<n; j++){
                    if(arr[j] == arr[i]){
         printed[j] = true;
                isDuplicate = true;
            }
        }
        if(isDuplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}