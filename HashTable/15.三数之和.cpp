/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, vector<int>> preSum;
        for (int i=0;i<nums.size();i++) {
            for (int j=0;j<nums.size();j++) {
                if (i != j) {
                    int tmpSum = nums[i]+nums[j];
                    vector<int> tmp;
                    tmp.emplace_back(i);
                    tmp.emplace_back(j);
                    preSum[tmpSum] = tmp;
                }
            }
        }
        vector<vector<int>> res;
        for (int k=0;k<nums.size();k++) {
            int diff = 0 - nums[k];
            if (preSum.find(diff) != preSum.end()) {
                if (k != preSum[diff][0] && k != preSum[diff][1]) {
                    vector<int> itemRes;
                    itemRes.emplace_back(nums[preSum[diff][0]]);
                    itemRes.emplace_back(nums[preSum[diff][1]]);
                    itemRes.emplace_back(nums[k]);
                    res.push_back(itemRes);
                }
            }
        }
        for (int i=0;i<res.size();i++) {
            vector<int> item = res[i];
            sort(item.begin(), item.end());
            res[i] = item;
        }
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};
// @lc code=end

