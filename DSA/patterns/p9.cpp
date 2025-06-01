#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin >> n;
for(int i=n;i>0;i--){
for(char ch='A'+i-1;ch>'A';ch --){
    cout<< ch <<" ";
}
cout<<endl;
}
return 0;
}