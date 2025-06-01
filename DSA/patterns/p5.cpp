#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        //for spaces
        for(int j=0;j<5-i;j++){
            cout<<" ";
        }
        //for stars
        for(int j=0;j<i*2+1;j++){
            cout<<"*";
        }
        //for spaces
        for(int j=0;j<5-i;j++){
            cout<<" ";
    }
    cout<< endl;
}
return 0;
}