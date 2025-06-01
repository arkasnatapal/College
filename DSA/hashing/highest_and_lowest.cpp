#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array:\n";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;  // Precompute frequencies
    }

    // Query phase
    int q;
    cout << "Enter the number of queries:\n";
    cin >> q;
    while (q--) {
        int num;
        cout << "Enter number to find frequency: ";
        cin >> num;
        cout << num << " ---> " << mpp[num] << endl;
    }

    // Find number with highest and lowest frequency
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxNum = -1, minNum = -1;

    for (auto it : mpp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxNum = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minNum = it.first;
        }
    }

    cout << "\nNumber with highest frequency: " << maxNum << " ---> " << maxFreq << endl;
    cout << "Number with lowest frequency: " << minNum << " ---> " << minFreq << endl;

    return 0;
}
