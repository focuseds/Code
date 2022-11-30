/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
class Solution {
public:
    string processString(string s) {
        int slow = 0;
        int length = 0;
        for (int fast=0;fast<s.size();++fast) {
            if(s[fast] != '#') {
                s[slow] = s[fast];
                slow = slow + 1;
                length = length + 1;
            } else {
                slow = max(0, slow - 1);
                length = max(0, length - 1);
            }
        }

        if (slow == 0) {
            return "";
        }

        string new_s;
        
        for (int i=0;i<length;++i) {
            new_s = new_s + s[i];
        }

        return new_s;
    }

    bool backspaceCompare(string s, string t) {
        string new_s = processString(s);
        string new_t = processString(t);
        return new_s == new_t;
    }
};
// @lc code=end

