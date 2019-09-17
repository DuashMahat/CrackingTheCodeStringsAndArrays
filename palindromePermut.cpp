
/*

Given a string, write a function to check if it is a permutation of
a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A
permutation is a rearrangement of letters. The palindrome does not need to be limited to just
dictionary words.

*/





#include <iostream>
#include <vector>
using namespace std;

bool palindromePermutaion (string s) {
   vector<int> vint ( 128 , 0);
   vector<bool> vbool (128 , false);
   int count = 0;
   for (auto c : s ) vint[c]++;
   for (auto c : s) {
     if ( vint[c] % 2 != 0  &&  !vbool[c]) {
        count++;
        if (count > 1) return false;
        vbool[c] = true;
     }
   }
     return true;
}
int main() {
  cout << boolalpha << endl;
  cout << palindromePermutaion ("nna") << endl;
   cout << palindromePermutaion ("duale") << endl;
    cout << palindromePermutaion ("tacocat") << endl;
     cout << palindromePermutaion ("riivr") << endl;

}
