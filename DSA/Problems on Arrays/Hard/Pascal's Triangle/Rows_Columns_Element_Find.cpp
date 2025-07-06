/* To find the element which is present in the given row and given column we simply have to chech a NcR 
where N will be (rows)-1 
and R will be (cols)-1 

Normal Code (T.C = O(r) , where r= rows, and S.C. = O(1) ) 

*/

#include<bits/stdc++.h>
using namespace std;
void NcR(int n, int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    cout << "The Element is " << res <<endl;
}
int main(){
int rows, cols;
cout << "Enter the row: ";
cin >> rows;
cout << "Enter the column: ";
cin >> cols;
NcR(rows-1,cols-1);
return 0;
}