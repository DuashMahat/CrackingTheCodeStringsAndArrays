

/*
 Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0.
pg91

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 void setZeroes(vector<vector<int>> &matrix) {
        // write your code here
        if (matrix.size() == 0 ) return;
        vector<bool> rows ( matrix.size() , false) , cols (matrix[0].size() , false);
        
        for (int i = 0; i < matrix.size(); ++i ) {
          for (int j = 0; j < matrix[i].size(); ++j ) {
              if (matrix[i][j] == 0 ) {
                  rows[i] = true;
                  cols[j] = true;
              }
          }
        }
        
        
        for (int i = 0; i < matrix.size(); ++i ) {
          for (int j = 0; j < matrix[i].size(); ++j ) {
              if (rows[i]   || cols[j]) {
                matrix[i][j] = 0;
              }
          }
        }
        
        
    
    }

int main() {
  vector<vector<int>> v = {{1,0,3}, {4,5,6} , {7,0,9}};
  setZeroes (v);
  for (auto rows  : v) {
    for ( auto val : rows ) {
        cout << val << " ";
    }
    cout << endl;
  }
   

}
