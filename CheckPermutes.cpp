


/*

Given two strings, write a method to decide if one is a permutation of the
other.

*/


#include <iostream>
#include <vector>
using namespace std;

bool checkPermutations ( string s1 , string s2 ) {
  if (s1.size() != s2.size()) return false;
  vector<int> v (128 , 0);
  for (auto c : s1 ) v[c]++;
  for (auto c : s2) {
    if (--v[c]  < 0 ) return false;
  }
  return true;
}

int main() {
  cout << boolalpha << endl;
  cout << checkPermutations("duale" , "elaud") << endl;
   cout << checkPermutations("dual   e" , "elaud") << endl;
    cout << checkPermutations("duale" , "elaua") << endl;
     cout << checkPermutations("duale" , "elAud") << endl;

}
