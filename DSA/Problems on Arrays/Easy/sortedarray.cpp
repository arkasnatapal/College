// check whether the given array is sorted or not

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter the size of array" << endl;
cin >> n;
int arr[n];
cout << "enter the values in the array" <<endl;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
// chechking whether the array is sorted or not 
for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){}
    else{
        cout << " false "; // this will return false
    }
}
cout << "true"; // this will return true
}