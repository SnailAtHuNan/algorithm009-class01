/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
   public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> valueIndexMap;
        for (int i = 0; i < nums.size(); i++) {
            int n = target - nums[i];
            if (valueIndexMap.find(n) != valueIndexMap.end()) {
                return vector<int>{valueIndexMap[n], i};
            }
            valueIndexMap[nums[i]] = i;
        }
        return vector<int>();
    }
};
// @lc code=end
