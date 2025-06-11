//Union of 2 sorted arrays BRUTE FORCE approach 
// --> when unique elements come into scenario you must think about set or map because they store unique values and in sorted order (preference -> set)

#include<bits/stdc++.h>
using namespace std;
void arrunion(int m,int n,int arr1[],int arr2[]){
    set<int>s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(arr2[i]);
    }
    for(auto it: s){
        cout << it << " ";
    }
}
int main(){
int m,n;
cout << "enter the size of array 1 and array 2" <<endl;
cin >> m >> n;
cout<< "enter sorted elements in array 1" <<endl;
int arr1[m],arr2[n];
for(int i=0;i<m;i++){
    cin >> arr1[i];
}
cout<< "enter sorted elements in array 2" <<endl;
for(int i=0;i<n;i++){
    cin >> arr2[i];
}
arrunion(m,n,arr1,arr2);
return 0;
}