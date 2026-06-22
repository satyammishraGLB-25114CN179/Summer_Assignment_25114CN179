#include <iostream>
#include <string>
using namespace std;
int compressString(string &s){
    int n = s.size();
    int idx = 0;
    for(int i = 0; i < n; i++){
        char ch = s[i];
        int count = 0;
        while(i < n && s[i] == ch){
            count++;
            i++;
        }
        if(count == 1){
            s[idx] = ch;
            idx++;
        }
        else{
            s[idx++] = ch;
            string str = to_string(count);
            for(char dig : str){
                s[idx++] = dig;
            }
        }
        i--;
    }
    s.resize(idx);
    return idx;
}
int main() {
   string s;
   cout << "Enter a string: ";
   getline(cin, s);

   compressString(s);
   cout << "Compressed string: " << s << endl;

   return 0;
}