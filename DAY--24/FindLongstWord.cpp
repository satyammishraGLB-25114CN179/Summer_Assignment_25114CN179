#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin,s);
   cout << "You entered: " << s << endl;
   
   int n = s.length();
   int maxLength = 0;
   string maxWord = "";
   string currentWord = "";
   for(int i = 0; i < n; i++){
       if(s[i] == ' '){
           if(currentWord.length() > maxLength){
               maxLength = currentWord.length();
               maxWord = currentWord;
           }
           currentWord = "";
       }
       else{
           currentWord += s[i];
       }
   }
   if(currentWord.length() > maxLength){
       maxLength = currentWord.length();
       maxWord = currentWord;
   }
   
   cout << "Longest word: " << maxWord << endl;
   cout << "Length: " << maxLength << endl;
   
   return 0;
}