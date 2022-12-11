/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start

// violence - time limit exceeded
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        for (int a : nums1) {
            for (int b : nums2) {
                for (int c : nums3) {
                    for (int d : nums4) {
                        if (a+b+c+d == 0) {
                            count = count + 1;
                        }
                    }
                }
            }
        }
        return count;
    }
};


// @lc code=end

