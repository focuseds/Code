/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int slow = 0;
        int tag = 0;
        for (int fast=0;fast<length;++fast) {
            if(nums[fast] == 0) {
                tag = tag + 1;
            } else {
                nums[slow] = nums[fast];
                slow = slow + 1;
            }
        }
        for (int i=nums.size()-tag;i<nums.size();++i) {
            nums[i] = 0;
        }
    }
};
// @lc code=end

