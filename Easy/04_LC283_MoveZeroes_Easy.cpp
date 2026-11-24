#include <bits/stdc++.h>
using namespace std;

// LeetCode 283 - Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nextNonZero = 0;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nextNonZero]);
                ++nextNonZero;
            }
        }
    }
};
