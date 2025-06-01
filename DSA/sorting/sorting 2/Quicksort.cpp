#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int st,int end){
    int idx=st-1, pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;

}
void quicksort(vector<int>&arr,int st, int end){
    if(st<end){
        int pivIdx = partition(arr,st,end);
        quicksort(arr,st,pivIdx-1); //Left
        quicksort(arr,pivIdx+1,end);
    }
}
int main(){
vector<int>arr={5,2,6,4,1,3};
quicksort(arr,0,arr.size()-1);
for(auto it:arr){
    cout << it << " ";
}
cout << endl;
return 0;
}