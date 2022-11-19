/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start

// 暴力法
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         if (nums.size() == 0){
//             return 0;
//         }
//         int length = nums.size();
//         int i = 0;
//         while(i<length) {
//             if(nums[i]==val) {
//                 for(int j=i;j<nums.size()-1;++j) {
//                     nums[j] = nums[j+1];
//                 }
//                 length = length - 1;
//                 i = i - 1;
//             }
//             i = i + 1;
//         }
//         return length;
//     }
// };

// 快慢指针法
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++) {
            if (val != nums[fast]) {
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};

// @lc code=end

