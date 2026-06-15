#include<iostream>
using namespace std;
#include<vector>
vector < int >findarrayintersection(vector < int >&A ,vector < int >&B){
    int i=0,j=0;
    int n=A.size();
    int m= B.size();
    vector < int >ans;
    while(i<n&&j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
     vector<int> arrayA = {1, 3, 5, 7, 9};
    vector<int> arrayB = {2, 3, 6, 7, 8};
 vector<int> result = findarrayintersection(arrayA, arrayB);
cout << "intersected Array: ";
    for (int num : result) {
        cout<<num<<" ";
    }
    cout << endl;

    return 0;
}