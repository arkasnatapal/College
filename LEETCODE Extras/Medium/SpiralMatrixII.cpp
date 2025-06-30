/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

Example 1:
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
Example 2:

Input: n = 1
Output: [[1]] */

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left =0,right=n-1;
        int top=0,down=n-1;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int p=1;
        while(top <= down && left <= right){
            for(int i=left;i<=right;i++){
                ans[top][i]=p;
                p++;
            }
            top++;
            for(int i=top;i<=down;i++){
                ans[i][right]=p;
                p++;
            }
            right--;
            if(top <= down){
                for(int i=right;i>=left;i--){
                    ans[down][i]=p;
                    p++;
                }
                down--;
            }
            if(left <=right){
                for(int i=down;i>=top;i--){
                    ans[i][left]=p;
                    p++;
                }
              left++;  
            }
        }
        return ans;
    }
};