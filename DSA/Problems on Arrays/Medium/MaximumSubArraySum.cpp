/* MAXIMUM SUBARRAY SUM PROBLEM
    arr[]=[-2,-3,4,-1,-2,1,5,-3]
    so here we wan tho find the maximum subarray sum which is 7 and that is the sum from 4 to 5 

    ----------------------------------------------
    BRUTE FORCE APPROACH  T.C. -> O(N^3)  SC=O(1) 
    ----------------------------------------------

    maxi=INT_MIN;
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    sum=0;
    for(k=i;k<j;k++){
    sum+=arr[k];}
    maxi=max(sum ,maxi);
    }
    }


    --------------------------------------------
    BETTER APPROIACH     T.C. -> O(N^2) SC=O(1)
    --------------------------------------------

    int maxi =INT_MIN;
    for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
    sum+=arr[j];
    maxi=max(sum,maxi);
    }
    }

    -------------------------------------------------------------------
    BEST APPROACH (KADANE'S ALGORITHM) WITH A T.C. -> O(N)  S.C.->O(1)
    -------------------------------------------------------------------
    Introduction of this algorithm :

    here we will take 2 Variables - sum and maxi
    int maxi will be the minimum possible integer possible and int sum will be 0 at first and then we will iterate the entire array 
    putting each values in the sum and check whether the sum is larger than maxi if it is then we will update maxi = sum 
    also we will check whether the number that is entering the sum is positive or negative if negative than we will assign the sum to be 0 
    because negative number make the sum more negative which we dont want.

    GIVEN BELOW IS LEETCODE EDITION 

*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};