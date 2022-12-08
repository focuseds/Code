/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> countOne;
        vector<int> res;

        for (auto i : nums1) {
            countOne[i] = countOne[i] + 1;
        }
        for (auto i : nums2) {
            if (countOne.count(i)) {
                res.emplace_back(i);
                countOne.erase(i);
            }
        }

        return res;
    }
};
// @lc code=end

