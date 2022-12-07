/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = {0};
        // 统计magazine中字符种类与个数
        for (int i=0;i<magazine.size();i++) { 
            record[magazine[i] - 'a'] = record[magazine[i] - 'a'] + 1;
        }
        // 统计ransomNote的符号使用情况
        for (int i=0;i<ransomNote.size();i++) {
            record[ransomNote[i] - 'a'] = record[ransomNote[i] - 'a'] - 1;
        }
        // 如果有record中有数值<0，则false
        for (int i=0;i<26;i++) {
            if (record[i] < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

