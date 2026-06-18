#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<vector<int>> a(n, vector<int>(n));
    cout << "Enter matrix A elements row-wise:\n";
    for (int i=0; i<n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    cout << "Matrix A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << '\n';
    }
     vector<vector<int>> b(n, vector<int>(n));
    cout << "Enter matrix B elements row-wise:\n";
    for (int i=0; i<n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> b[i][j];

    cout << "Matrix B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << b[i][j] << " ";
        cout << '\n';
    }
     vector<vector<int>> c(n, vector<int>(n));
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            c[i][j] = 0;
            for (int k=0; k<n; ++k)
                c[i][j] += a[i][k] * b[k][j];
        }

    cout << "Multiplied Matrix C is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << c[i][j] << " ";
        cout << '\n';
    }
    return 0;}