
#include <string>
#include <iostream>
using namespace std;

string isUnique ( string s ) {
   vector<int> v ( 128 , 0);
   for (auto c : s ) if (isalpha(c)) v[c]++;
   for (auto c : s ) if (isalpha(c)  && v[c] > 1) return "No";
   return "Yes";
}

int main () {
   cout << isUnique("duale") << endl;
    cout << isUnique("dualae") << endl;
     cout << isUnique("dualeaaaa") << endl;
}
