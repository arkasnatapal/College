//placing zeroes at the end of array (BRUTE FORCE APPROACH)

#include<bits/stdc++.h>
using namespace std;
void placezeroes(int n, int arr[]){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int rs=temp.size();
    for(int i=0;i<rs;i++){
        arr[i]=temp[i];
    }
    for(int i=rs;i<n;i++){
        arr[i]=0;
    }
}
int main(){
int n;
cout << " enter n" << endl ;
cin >> n;
cout<<" enter elements in the array" << endl;
int arr[n];
for(int i=0;i<n;i++){
    cin >>arr[i];
}
placezeroes(n,arr);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}