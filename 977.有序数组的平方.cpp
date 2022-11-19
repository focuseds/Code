/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto &x : nums) x *= x;
        sort(nums.begin(), nums.end());
        return nums;  
    }
};
// @lc code=end

