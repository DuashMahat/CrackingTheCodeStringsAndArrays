/*

Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).

*/




#include <iostream>
#include <vector>
using namespace std;

string compress(string &s) {
        // write your code here
        int lenOrig = s.size() , count = 1 , i = 1;
        if (lenOrig < 2 ) return s;
        string result {""};
        for (; i <= lenOrig; ++i ) {
           if (s[i]  == s[i - 1]  &&  i != lenOrig ) {
              count++;
           } else {
              result+=s[i - 1];
              result += to_string(count);
              count = 1;
           }
           
            if (result.size() >= lenOrig) return s;
        }
        
        // result += s[lenOrig - 1] ;
        // result+= to_string(count);
        return result.size() >= lenOrig ? s : result;
}


int main() {
  cout << boolalpha << endl;
  string a = "duaaaaaale" , b = "abbbbbac" , c = "a";
  // a = "duaaaaaale"
  cout << compress(a) << endl;
  // cout << a << endl;
   cout << compress (b) << endl;
    cout << compress (c) << endl;
   

}
