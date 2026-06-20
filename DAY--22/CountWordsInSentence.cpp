#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s <<endl;
   int n=s.length();
int words=0;
for(int i=0;i<n;i++){
    if(s[i]==' ') words++;
}
cout<<"Total words in this sentence is : "<<words+1;
    return 0;

}