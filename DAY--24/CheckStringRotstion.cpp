#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   int n = s.length();
   string t;
   cout << "Enter a string: ";
   getline(cin,t);
  int m = t.length();
  string concat=s+s;
  int ind=concat.find(t);
  if(ind==-1) cout<<"First string is not a rotation of second";
  else cout<<"First string is a rotation of second";
  return 0;
}