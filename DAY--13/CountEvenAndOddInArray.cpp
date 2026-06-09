#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
int even=0,odd=0;
    vector<int> arr(n);
   cout<<"Start entering numbers : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
        }
    
cout<<"total even element in array is : "<<even<<endl;
cout<<"total odd element in array is : "<<odd;
    
    return 0;
}