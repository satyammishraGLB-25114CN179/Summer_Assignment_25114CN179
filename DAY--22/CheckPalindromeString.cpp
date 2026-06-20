#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
string reversed(s.rbegin(),s.rend());
if(reversed==s) cout<<"String "<<s<<" is palindrome string";
else  cout<<"String "<<s<<" is not a palindrome string";
    return 0;

}