#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<vector<int>> a(n, vector<int>(n));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

}
 cout << "  Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[i][j];
        cout << '\n';
    }
     vector<vector<int>> b(n, vector<int>(n));
      for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
b[j][i]=a[i][j];
        }
    }
    cout << " Transposed Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << b[i][j];
        cout << '\n';
    }
           return 0;} 