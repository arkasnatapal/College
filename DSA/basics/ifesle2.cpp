#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the marks";
    cin >> n;
    if(n < 25){
        cout << "F";
    }
    else if(n>=25 && n<=45){
        cout << "E";
    }
    else if(n>=46 && n<=60){
        cout << "D";
    }
    else if(n>=61 && n<=75){
        cout << "C";
    }
    else if(n>=76 && n<=90){
        cout << "B";
    }
    else if(n>=91 && n<=100){
        cout << "A";
        }
}