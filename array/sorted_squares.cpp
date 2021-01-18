//
// Created by andyshen on 1/18/21.
//
#include "../header.h"

class Solution {
 public:
  static vector<int> sortedSquares(vector<int> &nums) {
    vector<int> result;
    if (nums.empty()) {
      return result;
    }
    int pos = 0;
    for (; pos < nums.size(); pos++) {
      if (nums[pos] >= 0) {
        result.push_back(nums[pos] * nums[pos]);
        break;
      }
    }

    int right, left;
    right = pos + 1;
    left = pos - 1;
    while (left >= 0 || right < nums.size()) {
      unsigned int pow_left = left >= 0 ? nums[left] * nums[left] : UINT32_MAX;
      unsigned int pow_right = right < nums.size() ? nums[right] * nums[right] : UINT32_MAX;

      if (pow_left > pow_right) {
        result.emplace_back(pow_right);
        right++;
      } else {
        result.emplace_back(pow_left);
        left--;
      }
    }
    return result;
  }
};

TEST(Solution, sortedSquares) {
  std::vector<int> vec= {-4, -1, 0, 3, 10};
  Solution::sortedSquares(vec);
};