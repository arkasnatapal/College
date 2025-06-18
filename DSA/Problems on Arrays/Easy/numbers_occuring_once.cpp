/* Find the number that appears once and other numbers twice*/

#include<bits/stdc++.h>
using namespace std;

// using bitwise XOR operation 
void appearonce(int n,int arr[]){
    int x=0;
    for(int i=0;i<n;i++){
        x = x ^ arr[i];
    }
    cout << x << " appeared once";
}

int main(){
int n;
cout << "Enter the size of array" << endl;
cin >> n;
int arr[n];
cout << "Enter the elements in array" << endl;
for(int i=0;i<n;i++){
    cin >>arr[i];
}
appearonce(n,arr);
return 0;
}