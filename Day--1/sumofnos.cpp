#include <iostream>
using namespace std;
int main(){ 
    int n,sum = 0;
cout << "Give n numbers: ";
 cin >> n;
for(int i = 1; i <= n; i++){
sum += i;
}
cout << "sum of given nos is = " << sum << endl;
    return 0;
}