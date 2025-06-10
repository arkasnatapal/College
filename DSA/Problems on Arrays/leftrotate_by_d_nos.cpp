// Left rotate an array by D times 
/* lets take and example 
suppose you are given an array arr[] =[1,2,3,4,5,6] and the question tells you to rotate the array ny 3 times (left) then 
the resultant arayy (modified array) is [4,5,6,1,2,3] so basically we will keep d no of elements in a differenht array and then we will change the position of the remaining numbers (left shift) by applying a loop from n-d to n and then we will add up the d elements after it again by traversing a loop from 0 to n-d and then swap the elements of that array to the defined array */

#include<bits/stdc++.h>
using namespace std;
void leftrotate(int n, int d, int arr[]){
    d=d%n; // this will avoid the long rotations making it short ... for example n=7 and no of rotations given is 20 then the answer after 20 rotations is same as 20%7 i.e. 6th rotation
    // placing d elements in a arr
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //left swapping the elements 
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i]; // let d=3, n=7 and then 4th element will be at index 0 to arr[3-3] = arr[3]
    } 
    // for adding the temp array (bit tricky use your brain and a paper pen for this)
    for(int i=n-d ; i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}
//user input
int main(){
int n;
cout << "Enter the number of digit to keep in the array" << endl;
cin >> n;
int arr[n];
cout << "Enter the elements in the array" << endl;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int d;
cout << "Enter the number of times you want to rotate your array to the left side" <<endl;
cin >> d;
leftrotate(n,d,arr);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}