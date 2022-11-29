/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int count = 1;
         int min_pos = 0;
         int max_pos = n - 1;
         vector<vector<int>> result(n, vector<int>(n, 0));
         while (count <= n * n){
            if (min_pos == max_pos) {
                result[min_pos][min_pos] = count++;
            }
            // top
            for (int j=min_pos;j<max_pos;j++) {
                result[min_pos][j] = count++;
            }
            // right
            for (int i=min_pos;i<max_pos;i++) {
                result[i][max_pos] = count++;
            }
            // bottom
            for (int j=max_pos;j>min_pos;j--) {
                result[max_pos][j] = count++;
            }
            // left
            for (int i=max_pos;i>min_pos;i--) {
                result[i][min_pos] = count++;
            }
            min_pos = min_pos + 1;
            max_pos = max_pos - 1;
         }

         return result;
    }
};
// @lc code=end

