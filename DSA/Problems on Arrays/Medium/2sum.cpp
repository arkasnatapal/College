// /* Brute Force approach given below with a time complexity of O(n^2)*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n ;
// cout << "Enter the size of array" << endl;
// cin >> n;
// int arr[n];
// cout << "Enter the elements in the array " <<endl;
// for(int i=0;i<n;i++){
//     cin >> arr[i];
// }
// cout << "Enter the sum " <<endl;
// int sum;
// cin >> sum;
// bool found;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//     if(arr[i] + arr[j] == sum) {
//             cout << "Pair found at indices: " << i << " and " << j << endl;
//             found = true;
//              break;
// }
// }
// if (found) break;
// }
// if(!found) cout << "No such pair found" << endl;
// return 0;
// }


// // Better Approach (Using Hashing) TC - O(NLogN) SC - O(N) .. maybe the optimal code for finding indexes

// string read (int n, vector<int> book, int target){
// map<int,int> mpp;
// for (int i =0;i<n;i++){
// int a= book [i];
// int more= target -a;
// if(mpp.find(more)! = mpp.end()) {
// return "YES";// return {mpp[more],i};
// }
// mpp [a] =i;
// }
// return "NO";
// }

// // OPTIMAL SOLUTION 
string read(int n, vector<int>book,int target){
    int left=0,right=n-1;
    sort(book.begin(),book.end());
    while(left<right){
        int sum = book[left]+book[right];
        if(sum == target){
            return "Yes";
        }
        else if (sum < target) left ++;
        else right ++;
    }
    return "NO";
}
