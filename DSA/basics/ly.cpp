#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cout << "enter the year ";
    cin>> y;
    if((y%100==0 && y%400==0)||(y%100!=0 && y%4==0)){
        cout<<"leap year";
    }
    else if((y%100==0 && y%400!=0)||(y%4!=0)){
        cout<<"not leap year";
    
    }
}