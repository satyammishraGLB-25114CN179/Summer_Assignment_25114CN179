#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   string a;
   cout << "Enter a string: ";
   getline(cin, s);
   cout << "You entered: " << s << endl;

   for (int i = 0; i < s.length(); i++) {
       if (s[i] >= 'a' && s[i] <= 'z') {
           s[i] = s[i] - 32;
       }
   }

   cout << "Uppercase string: " << s << endl;
   return 0;

}