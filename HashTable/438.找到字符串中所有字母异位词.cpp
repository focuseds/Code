/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start

// 暴力法超时
// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         sort(p.begin(), p.end());
//         vector<int> res;
//         for (int i=0;i<s.size();i++) {
//             string tmp = s.substr(i, p.size());
//             sort(tmp.begin(), tmp.end());
//             if (tmp == p) res.emplace_back(i);
//         }
//         return res;
//     }
// };

// 滑动窗口
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        int left = 0;
        int right = 0;
        int valid = 0;

        vector<int> res;
        for (auto c : p) need[c] = need[c] + 1;

        while (right < s.size()) {
            char c_r = s[right];
            if (need.count(c_r)) {
                window[c_r] = window[c_r] + 1;
                if (window[c_r] == need[c_r]) {
                    valid = valid + 1;
                }
            }

            right = right + 1;

            if (valid == need.size()) {
                res.emplace_back(left);
            }

            while (right - left + 1 > p.size()) {
                char c_l = s[left];

                if (need.count(c_l)) {
                    if (need[c_l] == window[c_l]) {
                        valid = valid - 1;
                    }
                    window[c_l] = window[c_l] - 1;
                }
                left = left + 1;
            }
        }
        return res;
    }
};
// @lc code=end

