//
// Created by andyshen on 2020/11/9.
//
#include "../header.h"

class Solution {
 public:
  static vector<vector<int>> kClosest(vector<vector<int>> &points, int K) {
    vector<vector<int>> result;
    if (points.empty()) {
      return result;
    }
    float dis = 1000000.0;
    std::vector<vector<int>> states;
    int offset = 0;
    for (const auto &point : points) {
      float current_dis = distance(point);
      if ( current_dis == dis) {
        states.push_back(point);
      }
    }
    return points;
  }

 private:
  static inline float distance(const vector<int> &point) {
    float dis = pow(point[0], 2.0) + pow(point[1], 2.0);
    std::cout << dis;
    return dis;
  }
};

TEST(TestWapper, NextValue) {
  vector<vector<int>> input;
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(3);
  vector<int> v2;
  v2.push_back(2);
  v2.push_back(-2);
  input.push_back(v1);
  input.push_back(v2);

  Solution::kClosest(input, 1);
}
