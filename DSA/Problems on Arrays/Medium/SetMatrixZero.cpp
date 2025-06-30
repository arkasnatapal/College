/* Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 */

 // this is the optimal silution LEETCODE EDITION 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns
        int col0 = 1;                 // flag for first column

        // First pass: mark rows and columns that need to be zeroed
        for(int i = 0; i < n; i++){
            if(matrix[i][0] == 0) col0 = 0;   // check first column separately
            for(int j = 1; j < m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;       // mark corresponding row
                    matrix[0][j] = 0;       // mark corresponding column
                }
            }
        }

        // Second pass: set zeroes using markers (skip first row and column)
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row separately if needed
        if(matrix[0][0] == 0){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }

        // Handle first column separately if needed
        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
