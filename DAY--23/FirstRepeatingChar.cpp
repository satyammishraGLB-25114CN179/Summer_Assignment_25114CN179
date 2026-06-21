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
    int count=0;
    for(int j=0;j<n;j++){
        if(s[i]==s[j]) count++;
    }
    if(count>=2){
        cout<<"First repeating string is : "<<s[i]<<endl;
        break;
    }
   }
   return 0;
}