// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// // while(n>0){
// //   int ld = n%10;
// //   cout << ld << endl;
// //   n=n/10;    
// // }

// for(;n>0;n/=10){
//     int ld = n%10;
//     cout << ld <<endl;
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int ed (int n) {
    int m =n;
    int p=0;
    for(;n>0;n/=10){
        int ld =n%10;
        if(ld!=0 && m%ld==0){
            p++;
        }
    }
    cout<< p;
}
int main(){
ed(25);
return 0;
}