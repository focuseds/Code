/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start

// 求平方后排序
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for (auto &x : nums) x *= x;
//         sort(nums.begin(), nums.end());
//         return nums;  
//     }
// };

// 双指针法
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int pos_res = nums.size() - 1;
        vector<int> res(nums.size(), 0);
        int pre = 0;
        int end = nums.size() - 1;
        while (pre <= end) {
            if (nums[pre]*nums[pre] > nums[end]*nums[end]) {
                res[pos_res--] = nums[pre] * nums[pre];
                pre = pre + 1;
            } else {
                res[pos_res--] = nums[end] * nums[end];
                end = end - 1;
            }
        }
        return res;
        
    }
};

// @lc code=end

