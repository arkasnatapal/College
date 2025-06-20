// whats this question is asking 
/* lets take an array arr[]=[2,2,3,3,1,2,2]  so there are 7 elements in total and n/2 = 7/2 ie 3 
now see we have 4 two which is the majority element that occur in this entire array greater than N/2

Brute Force Method is given below 
for (i=0;i<n;i++){
    int count=0;
    for(j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
        if(count > n/2) return arr[i];
    }
}
    
T.C. --> here we can see there are 2 loops runnig which means O(N^2)

Now lets talk about the better solution (using Hashing)

int majorityelement(vector<int>v){
map<int,int>mpp;
for(int i=0;i<v.size();i++){
mpp[v[i]]++;
}
for(auto it:mpp){
if(it.second >(v.size()/2)){
return it.first;
}
}
return -1;
} 

here T.C. = O(NLogN) + O(N)    and S.C.= O(N)  

Now lets talk about the Optimal Solution [LEETCODE EDITION] (using MOORE'S VOTING ALGORITHM)*/ 
 class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        int el;
        for(int i=0;i<size;i++){
            if(count==0){
                count=1;
                el= nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<size;i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1 > size/2){
            return el;
        }
        return -1;
    }
};