/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
   public:
    int trap(vector<int>& height) {
        int left_max = 0;
        int right_max = 0;
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= left_max) {
                    left_max = height[l];
                } else {
                    ans += (left_max - height[l]);
                }
                l++;
            } else {
                if (height[r] >= right_max) {
                    right_max = height[r];
                } else {
                    ans += (right_max - height[r]);
                }
                r--;
            }
        }
        return ans;
    }
};
// @lc code=end
