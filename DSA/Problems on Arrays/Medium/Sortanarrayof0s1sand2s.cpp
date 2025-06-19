// // Brute Force --> Any Sorting algorithm 

// // Better method --> 

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int count0 = 0, count1 = 0, count2 = 0; // Initialize all counters to 0
//     // Count 0s, 1s and 2s
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             count0++;
//         } else if (arr[i] == 1) {
//             count1++;
//         } else {
//             count2++;
//         }
//     }
//     // Overwrite array
//     for (int i = 0; i < count0; i++) {
//         arr[i] = 0;
//     }
//     for (int i = count0; i < count0 + count1; i++) {
//         arr[i] = 1;
//     }
//     for (int i = count0 + count1; i < n; i++) {
//         arr[i] = 2;
//     }
//     // Print sorted array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// // Optimal solution (LEETCODE VERSION) {- Using DUTCH NATIONAL FLAG ALGORITHM   [TC IS O(N) SC IS O(1)] -}

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low=0,mid=0,high=nums.size()-1;
      while(mid <= high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
          swap(nums[mid],nums[high]);
          high--;  
        }
      }  
    }
};