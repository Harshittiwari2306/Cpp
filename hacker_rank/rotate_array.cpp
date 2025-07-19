#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;

// Function to rotate the array to the right by k steps
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // In case k > n
    if (k == 0) return;

    // Reverse the whole array
    reverse(arr.begin(), arr.end());
    // Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Reverse the rest
    reverse(arr.begin() + k, arr.end());
}

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "Enter number of rotations: ";
    cin >> k;

    rotateArray(arr, k);

    cout << "Rotated array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
