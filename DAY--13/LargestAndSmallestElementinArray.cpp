#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
int lgst=INT_MIN,smlst=INT_MAX;
    vector<int> arr(n);
   cout<<"Start entering numbers : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>lgst){
            lgst=arr[i];
        }
         if(arr[i]<smlst){
            smlst=arr[i];
        }
    }
cout<<"Smalllest element in array is : "<<smlst<<endl;
cout<<"Largest element in array is : "<<lgst;
    
    return 0;
}