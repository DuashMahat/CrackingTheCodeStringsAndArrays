/*
Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix) {
        // write your code here
        if (matrix.size() == 0 || matrix.size() == 1) return;
        reverse(matrix.begin() , matrix.end());
        for (int i = 0; i < matrix.size(); ++i ) {
           for (int j = i; j < matrix.size(); ++j ) {
               int temp = matrix[i][j];
               matrix[i][j] = matrix[j][i];
               matrix[j][i] = temp;
           }
        }
    }

int main() {
  vector<vector<int>> v = {{1,2,3}, {4,5,6} , {7,8,9}};
  rotate (v);
  for (auto rows  : v) {
    for ( auto val : rows ) {
        cout << val << " ";
    }
    cout << endl;
  }
   

}
