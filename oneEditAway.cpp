

/*
There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.

*/



#include <iostream>
#include <vector>
using namespace std;

 bool isOneEditDistance(string s, string t) {
        // write your code here
        if (s == t ) return false;
        int lenS = s.size() , lenT = t.size() , count = 0;
        if (abs(lenS - lenT) > 1 ) return false;
        string lSt , sSt;
        if (lenS > lenT) {
            lSt = s;
            sSt = t;
        } else if (lenT > lenS) {
            lSt = t;
            sSt = s;
        } else {
            lSt = t;
            sSt = s;
        }
        
        std::vector<int> v(128 , 0) ;
        for (auto c : sSt) v[c]++;
        for (auto c : lSt) {
           if (--v[c] < 0 ) count++;
           if (count > 1) return false;
        }
        return true;
    }
int main() {
  cout << boolalpha << endl;
  cout << isOneEditDistance("pale" , "bal") << endl;
   cout << isOneEditDistance ("duale" , "duale") << endl;
    cout << isOneEditDistance ("pales" , "pale") << endl;
     cout << isOneEditDistance ("pal" , "bae") << endl;
       cout << isOneEditDistance ("pale" , "ple") << endl;

}
