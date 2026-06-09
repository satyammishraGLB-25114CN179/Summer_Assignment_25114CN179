#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
int sum=0;
float avg;
    vector<int> arr(n);
   cout<<"Start entering numbers : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
sum=sum+arr[i];
    }
    avg=(float)sum/n;
    cout<<"Sum of array is : "<<sum<<endl;
 cout<<"average of array is : "<<avg;
    return 0;
}