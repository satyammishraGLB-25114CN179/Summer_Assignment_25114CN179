#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   char c;
   cout<<"Enter character : ";
   cin>>c;
   int count=0;
   int n = s.length();
   for (int i = 0; i < n; i++) {
       if(s[i]==c) count++;
   }

   cout << "Frequency of Character " << c << "  is : "<<count;

    return 0;

}