//take 2 numbers and print its sum
#include<bits/stdc++.h>
using namespace std;
int sum(int a , int b){
    int s = a+b;
    return s;
}
int main(){
    int a,b;
    cin>>a>>b;
    int res = sum(a,b);
    cout<<res;
    return 0;
}