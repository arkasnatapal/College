//left rotate the array elements by 1 unit 
//example- [1,2,3,4,5]  ->  [2,3,4,5,1]
// the code given below is the most optimal code having a TC of O(N) and SC of O(1)
// space taken by the question is O(N) and the extra space that the algo is taking is O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter the value of n" << endl;
cin >> n;
int arr[n];
cout << "enter the array elements" << endl;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
//interchange
int temp=arr[0];
for(int i=1;i<n;i++){
     arr[i-1]=arr[i];
}
arr[n-1]=temp;
//printing
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}