#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
for(int i =0;i<=n-1;i++){
int j=i;
while(j>0 && arr[j-1]>arr[j]){
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    j--;
}
}
}
int main(){
int n;
cout << "enter the size of the array" <<endl;
cin >> n;
int arr[n];
 cout << "enter the elements of the arr" << endl;
for(int i=0;i<n;i++){
cin >> arr[i];
}
insertion_sort(arr,n);
//printing
for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
}
return 0;
}