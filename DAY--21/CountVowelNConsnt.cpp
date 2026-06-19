#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   int cnt=0;
for (size_t i = 0; i < s.length(); ++i) {
    char c =s[i];
    if (c=='a' ||c=='e'||c=='i'||c=='o'||c=='u') {
        ++cnt;
    }
}
cout<<"NO of vowels are : "<<cnt<<endl;
    return 0;
}
