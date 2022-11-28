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
        int sum = 0;
        int res = INT32_MAX;
        int start = 0;
        for (int end=0;end<nums.size();end++) {
            sum = sum + nums[end];
            while (sum >= target) {
                int tmp_res = end - start + 1;
                res = res > tmp_res ? tmp_res : res;
                sum = sum - nums[start];
                start = start + 1;
            }
        }
        return INT32_MAX > res ? res : 0;
    }
};
// @lc code=end

