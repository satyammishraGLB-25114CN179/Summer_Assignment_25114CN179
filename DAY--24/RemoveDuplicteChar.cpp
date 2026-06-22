#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s << endl;
   
   int n = s.length();
   cout<<"New string is: ";
   for(int i=0;i<n;i++){
       bool found = false;
       for(int j=0;j<i;j++){
           if(s[i]==s[j]){ 
               found = true;
               break;
           }
       }
       if(!found){
           cout<<s[i];
       }
   }

   return 0;}