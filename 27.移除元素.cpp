/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start

// 暴力法
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int i = 0;
        while (i < length){
            if (nums[i] == val) {
                nums[i] = nums[length - 1];
                length = length - 1;
            } else {
                i = i + 1;
            }
        }    
        return length;    
    }
};

// 快慢指针法
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int slow = 0;
//         for (int fast = 0; fast < nums.size(); fast++) {
//             if (nums[fast] != val) {
//                 nums[slow++] = nums[fast];
//             }
//         }
//         return slow;
//     }
// };

// @lc code=end

