#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   int cnt=0;
for (int i = 0; i < s.length(); i++) {
   
   cnt++;}
cout<<"String length is : "<<cnt<<endl;
    return 0;

}