// //Given an array arr containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// // given below is a BRUTE FORCE approach 

// #include<bits/stdc++.h>
// using namespace std;
// int missing(int n,int arr[]){
//     int j=0;
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//        if(arr[i]!=i){
//         return i;
//        }
// }
// return n;
// }
// int main(){
// int n;
// cout << "Enter the size of array" << endl;
// cin >> n;
// cout << "Enter the array elements" <<endl;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin >> arr[i];
// }
// int miss=missing(n,arr);
// cout << "missing number is " << miss << endl;
// return 0;
// }


// //optimal code is below 


#include<bits/stdc++.h>
using namespace std;
int missing(int n,int arr[]){
    int expectedsum= n*(n+1)/2;
    int realsum=0;
    for(int i=0;i<n;i++){
        realsum+=arr[i];
    }
        return expectedsum-realsum;
}
int main(){
int n;
cout << "Enter the size of array" << endl;
cin >> n;
cout << "Enter the array elements" <<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int miss=missing(n,arr);
cout << "missing number is " << miss << endl;
return 0;
}
