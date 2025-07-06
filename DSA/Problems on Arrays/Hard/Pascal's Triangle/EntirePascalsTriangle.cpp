/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

LEETCODE VERSION 
 */

 class Solution {
public:
    vector<int> generateRows(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);  

        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            ansRow.push_back(ans);  
        }

        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 1; i <=numRows; i++) { 
            ans.push_back(generateRows(i));  
        }

        return ans;
    }
};
