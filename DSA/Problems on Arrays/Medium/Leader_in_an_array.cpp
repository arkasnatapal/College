// // BRUTE FORCE APPROACH 
// #include <bits/stdc++.h>
// using namespace std;

// void leaders(int n, int arr[]) {
//     for (int i = 0; i < n; i++) {
//         bool isLeader = true;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[i]) {
//                 isLeader = false;
//                 break; // No need to check further
//             }
//         }
//         if (isLeader) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     leaders(n, arr);
//     return 0;
// }


// OPTIMAL SOLUTION APPROACH 
#include <bits/stdc++.h>
using namespace std;

void leaders(int n, int arr[]) {
    int maxi = INT_MIN;
    vector<int> v;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            v.push_back(arr[i]); // store current leader
        }
    }

    for (int leader : v) {
        cout << leader << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    leaders(n, arr);
    return 0;
}
