/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start

// 暴力法：超时了
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int res = INT32_MAX;
//         for (int i=0;i<nums.size();i++) {
//             int tmp_sum = nums[i];

//             if (tmp_sum >= target) {
//                 res = 1;
//             }

//             int tmp_length = 1;
//             for (int j=i+1;j<nums.size();j++) {
//                 tmp_sum = tmp_sum + nums[j];
//                 tmp_length = tmp_length + 1;
//                 if (tmp_sum >= target) {
//                     if (res > tmp_length) {
//                         res = tmp_length;
//                     }
//                     break;
//                 }
//             }
//         }
//         return res == INT32_MAX ? 0 : res;
//     }
// };

// 滑动窗口
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
    }
};
// @lc code=end

