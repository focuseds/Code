/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start

// 快慢指针法
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0, fast = 0;
        int length = nums.size();
        while (fast < length)
        {
            if (nums[fast] == nums[slow]) {
                fast = fast + 1;
            } else {
                slow = slow + 1;
                nums[slow] = nums[fast];
                fast = fast + 1;
            }
        }
        return slow + 1;
    }
};
// @lc code=end

