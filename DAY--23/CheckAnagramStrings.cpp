#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s << endl;

   string m;
   cout << "Enter another string: ";
   getline(cin, m);
   cout << "You entered: " << m << endl;

   if (s.length() != m.length()) {
      cout << "This is not an anagram string" << endl;
      return 0;
   }

   int freq[256] = {0};
   for (char c : s) {
      freq[(unsigned char)c]++;
   }
   for (char c : m) {
      freq[(unsigned char)c]--;
   }

   bool isAnagram = true;
   for (int i = 0; i < 256; i++) {
      if (freq[i] != 0) {
         isAnagram = false;
         break;
      }
   }

   if (isAnagram) {
      cout << "This is an anagram string" << endl;
   } else {
      cout << "This is not an anagram string" << endl;
   }

   return 0;
}