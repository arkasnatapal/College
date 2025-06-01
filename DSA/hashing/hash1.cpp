#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of array elements:\n";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the values in the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequency using unordered_map
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries:\n";
    cin >> q;

    while (q--) {
        int num;
        cin >> num;
        cout << hash[num] << endl;  // Returns 0 if not present
    }

    return 0;
}
