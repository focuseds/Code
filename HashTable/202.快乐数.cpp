/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int numSum(int n) {
        int sum = 0;
        for (auto i : to_string(n)) {
            sum = sum + (i - '0') * (i - '0');
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_map<int, bool> midSum;
        while (true) {
            if (midSum.count(n) && midSum[n]) { 
                return false;
            } else {
                midSum[n] = true;
                n = numSum(n);
            }
            if (n == 1) {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

