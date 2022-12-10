/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> data;
        vector<int> res;
        for (int i=0;i<nums.size();i++) {
            int diff = target - nums[i];
            if (data.count(diff)) {
                res.emplace_back(i);
                res.emplace_back(data[diff]);
                return res;
            } else {
                data[nums[i]] = i;
            }
        }
        return res;
    }
};
// @lc code=end

