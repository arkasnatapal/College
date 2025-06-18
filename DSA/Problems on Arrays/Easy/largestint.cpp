// question - find the largest integer in an array (Optimal Solution with time complexity of O(n))
// Brute force method can be to sort the array in ascending order and to print the last element xz

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
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "largest digit in the array is " << largest << endl;
}
