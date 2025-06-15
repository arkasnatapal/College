/* this is a program of finding the maximum consecutive occurences of one in a given array 
lets take an example 
arr[] ={1, 1, 0, 1, 1, 1, 0, 1, 1}
the maximum consecutive occurences of one in this array is 3
now how to approach to this sum 
lets make two variables max and count while starting the pointer from arr[0] to end once we find 1 it will update the count variable ny 1 (i.e. count++)
and also will store the max value to max variable 
once it finds a 0 the count variable will also become 0 and the same thing will repeat i mean the iteration once the count > max then we will do 
max= count and then will print it 

time complexity is O(N)

*/
#include<bits/stdc++.h>
using namespace std;
void consecutiveone(int n,int arr[]){
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(max < count){
                max= count;
            }
        }
    else {
        count=0;
    }
    }
    cout << "The max consecutive 1 in this array is "<< max << endl;
}
int main(){
int n;
cout << "Enter the size of array" << endl;
cin >> n;
int arr[n];
cout << "Enter the elements (1 and other) in array" << endl;
for(int i=0;i<n;i++){
    cin >>arr[i];
}
consecutiveone(n,arr);
return 0;
}