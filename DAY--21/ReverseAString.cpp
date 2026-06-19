#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   int n = s.length();
   for (int i = 0; i < n / 2; i++) {
       char temp = s[i];
       s[i] =s[n-1-i];
       s[n-1-i]=temp;
   }

   cout << "Reverse string is : " << s << endl;

    return 0;

}