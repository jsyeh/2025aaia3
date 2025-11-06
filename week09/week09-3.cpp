// week09-3.cpp 學習計畫 Matrix 第3題
// LeetCode 54. Spiral Matrix 請你一直用 LeetCode AI助手 Leet
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int up=0, down=M-1, left=0, right=N-1;
        // 先把上下左右的邊界,都宣告一個變數初始值
        vector<int> ans;
        while (up<=down && left<=right) {
            for (int i=left; i<=right; i++) { //往右, 人類容易理解的迴圈, 從 left 到 right
                ans.push_back(matrix[up][i]);
            }
            up++; // AI助手說, 要寫 up++ 上邊界內縮

            for (int i=up; i<=down; i++) { //往下,  人類容易理解的迴圈, 從 up 到 down
                ans.push_back(matrix[i][right]);
            }
            right--; // AI助手說,是右邊界內縮

            if ( ! (up<=down && left<=right) ) break; // 邊界超過範圍、交叉, 沒辦法繼續哦!

            for (int i=right; i>=left; i--) { // (倒過來的迴圈)往左
                ans.push_back(matrix[down][i]);
            }
            down--;

            for (int i=down; i>=up; i--) { // (倒過來的迴圈)往上
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
