/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> countOne(nums1.begin(), nums1.end());
        unordered_set<int> res;

        for (auto i : nums2) {
            if (countOne.find(i) != countOne.end()) {
                res.insert(i);
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};
// @lc code=end

