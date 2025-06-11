#include <bits/stdc++.h>
using namespace std;

// Function to return the union of two sorted arrays
vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    // Two-pointer merge
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Remaining elements in b
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    // Remaining elements in a
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter elements of first array (sorted): ";
    for (int i = 0; i < n1; i++) cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter elements of second array (sorted): ";
    for (int i = 0; i < n2; i++) cin >> b[i];

    vector<int> result = sortedArray(a, b);
    cout << "Union of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
