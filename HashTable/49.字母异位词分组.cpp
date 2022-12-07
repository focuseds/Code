/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start

// 排序
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dic;
        for (auto str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            dic[key].emplace_back(str);
        }
        vector<vector<string>> res;
        for (auto item=dic.begin();item!=dic.end();item++) {
            res.emplace_back(item->second);
        }
        return res;
    }
};

// @lc code=end

