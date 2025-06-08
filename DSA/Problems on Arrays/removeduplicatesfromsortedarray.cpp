// Remove duplicates from array (using 2 pointers system)

#include <bits/stdc++.h>
using namespace std;
int result(int n, int arr[]) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j]; // move next unique element forward
        }
    }
    return i + 1;
}
int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    int arr[n]; // works with GCC, replace with vector for portability
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int answer = result(n, arr);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < answer; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNumber of unique elements: " << answer << endl;
    return 0;
}
