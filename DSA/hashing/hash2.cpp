//hash for char 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout << "enter the string";
cin >> s;
//precompute
unordered_map<char,int>mpp;
for(int i=0;i<s.size();i++){
    mpp[s[i]]++;
}
int q;
cout << "no of queries";
cin >> q;
while(q--){
    char ch;
    cin >> ch;
    //fetch
    cout << mpp[ch] <<endl;
}
return 0;
}