// placing zeroes at the end of the array (MOST OPTIMAL SOLUTION) 
/* in this the time complexity is O(n) and the space complexity is O(1)  ---- here we will follow two pointer approach 
first we will see where the 0 is located and then we will fix the pointer of j in that position and then we will iterate the i poiinter to that entire 
array to find the non 0 numbvers and once find we will swap the non zero divgit with that of j pointer and will do a simple j++ 
this will result -> Non 0 numbers in the front ending by zeroes this is what the question is asking for */

#include <bits/stdc++.h>
using namespace std;

void zeroes(int n, int arr[]) {
    int j = -1;

    // Step 1: Find the first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero is found, no need to proceed
    if (j == -1) return;

    // Step 2: Swap non-zero with zero
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values in the array: \n" ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    zeroes(n, arr);

    cout << "Array after moving zeroes to the end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}