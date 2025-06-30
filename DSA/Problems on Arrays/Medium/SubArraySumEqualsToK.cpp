/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2

LEETCODE EDITION
 */
 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        mpp[0]=1;
        int PreSum=0,count=0;
        for(int i=0;i<n;i++){
            PreSum+=nums[i];
            int remove=PreSum-k;
            count+=mpp[remove];
            mpp[PreSum]+=1;
        }
        return count;
    }
};