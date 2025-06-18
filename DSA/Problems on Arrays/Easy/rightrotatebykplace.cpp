// Right rotate the array by K place

#include<bits/stdc++.h>
using namespace std;
void rightrotate(int n,int k,int arr[]){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
int main(){
int n,k;
cout << "Enter the size of array"<<endl;
cin >> n;
int arr[n];
cout << "enter elements in the array" << endl;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
cout << "Enter the no of times you want to rotate it by right side" <<endl;
cin >> k;
rightrotate(n,k,arr);
for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
}
return 0;
}