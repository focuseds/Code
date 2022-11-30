/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int all_sum = m * n;
        int count = 0;

        int m_min_pos = 0;
        int m_max_pos = m - 1;
        int n_min_pos = 0;
        int n_max_pos = n - 1;

        vector<int> result(all_sum, 0);

        while (count < all_sum)
        {
            // 单独给n为奇数的矩阵中间赋值
            if (n_min_pos == n_max_pos) {
                result[count++] = matrix[n_min_pos][n_min_pos];
            }
            // top
            for (int j=n_min_pos;j<n_max_pos;j++) {
                result[count++] = matrix[m_min_pos][j];
            }
            // right
            for (int i=m_min_pos;i<m_max_pos;i++) {
                result[count++] = matrix[i][m_max_pos];
            }
            // bottom
            for (int j=n_max_pos;j>n_min_pos;j--) {
                result[count++] = matrix[n_max_pos][j];
            }
            // left
            for (int i=m_max_pos;i>m_min_pos;i--) {
                result[count++] = matrix[i][n_min_pos];
            }
            m_min_pos = m_min_pos + 1;
            m_max_pos = m_max_pos - 1;
            n_min_pos = n_min_pos + 1;
            n_max_pos = n_max_pos - 1;
        }
        return result;
    }
};
// @lc code=end

