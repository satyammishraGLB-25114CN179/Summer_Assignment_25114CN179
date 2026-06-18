#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<vector<int>> a(n, vector<int>(n));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    cout << "Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[i][j];
        cout << '\n';
    }
    int rowsum;
     for (int i = 0; i < n; ++i) {
rowsum=0;
        for (int j = 0; j < n; ++j){
            rowsum+=a[i][j];
        }
        cout<<"Sum of "<<i+1<< " row is : "<<rowsum<<endl;
        }
        return 0;
    }