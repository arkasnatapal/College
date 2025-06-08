// //wap to find the 2nd largest number in an array (better code and optimal code is given below)

// // A brute force approach can be sorting the entire array and then running the loop from n-2 to 0 the we will check whether arr[i] is not equals to largest and then we will store arr[i] as the second largest element in the array

// //better code (Time complexity of N^2)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout << "Enter the size of array " << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the datas in array" << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int largest =arr[0];
//     int seclargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>seclargest && arr[i]!=largest){
//             seclargest=arr[i];
//         }
//     }
//     cout << "Second largest element is " << seclargest << endl;
// return 0;
// }

// // MOST OPTIMAL CODE IS GIVEN BELOW (try to follow this)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the datas in array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest =arr[0];
    int seclargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i] > seclargest){
            seclargest=arr[i];
        }
    }
    cout << "The second largest number is " << seclargest;
return 0;
}
