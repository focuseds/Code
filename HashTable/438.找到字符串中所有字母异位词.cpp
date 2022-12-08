/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start

// 暴力法超时
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        sort(p.begin(), p.end());
        vector<int> res;
        for (int i=0;i<s.size();i++) {
            string tmp = s.substr(i, p.size());
            sort(tmp.begin(), tmp.end());
            if (tmp == p) res.emplace_back(i);
        }
        return res;
    }
};


// @lc code=end

