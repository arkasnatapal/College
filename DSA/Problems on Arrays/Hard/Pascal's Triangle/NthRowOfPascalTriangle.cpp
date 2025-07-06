/*Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]


Leetcode answer TC.=O(n) AND SC=O(r)

 */

 class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long ans = 1;
        result.push_back(1); // First element is always 1

        for (int i = 1; i <= rowIndex; i++) {
            ans = ans * (rowIndex - i + 1);
            ans = ans / i;
            result.push_back(ans);
        }

        return result;
    }
};
