//
// Created by andyshen on 2020/11/4.
//
#include "../header.h"

class Solution {
 public:
  static vector<vector<int>> transpose(vector<vector<int>> &A) {
    vector<vector<int>> result;
    if (A.empty()) {
      return result;
    }
    int x = A.size();
    int y = A[0].size();
    result.resize(y);
    for (int i = 0; i < y; i++) {
      for (int j = 0; j < x; j++) {
        result[i].push_back(A[j][i]);
      }
    }
    return result;
  }
};

TEST(Solution, Transpose) {
  vector<vector<int>> input;
  vector<int> sub_input;
  sub_input.push_back(1);
  input.push_back(sub_input);
  vector<vector<int>> result = Solution::transpose(input);
};
