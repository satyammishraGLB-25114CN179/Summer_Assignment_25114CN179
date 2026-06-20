#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   int n=s.length();
for(int i=0;i<n;i++){
    if(s[i]==' ') continue;
    else cout<<s[i];
}
    return 0;

}