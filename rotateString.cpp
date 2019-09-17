

/*
Assume you have a method i 5Su b 5 tr ing which checks if one word is a substring
of another. Given two strings, 51 and 52, write code to check if 52 is a rotation of 51 using only one
call to i5Sub5tring (e.g., "waterbottle" is a rotation of" erbottlewat").
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    
    bool isSubstring ( string Smain  , string Ssubs) {
      return Ssubs.size() == Smain.size()  &&  (Ssubs + Ssubs).find(Smain) != string::npos;
    }
    bool isSubstr ( string Smain  , string Ssubs)  {
       return isSubstring ( Smain , Ssubs);
    }

int main() {
   cout << boolalpha << endl;
   string a = "abcde" , b = "cdeab" , c = "abced";
   cout << isSubstr(a , b) << endl;
   cout << isSubstr(a , c) << endl;
   

}
