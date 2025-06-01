#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "enter the number n";
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
//pre-compute 
map <int,int> hash;
for(int i=0;i<n;i++){
    hash[arr[i]]++;
}
//query 
int q;
cout << "enter the query";
cin >> q;

while(q--){
    int num;
    cin >> num;
    //fetch 
    cout << hash[num] <<endl;
}
return 0;
}