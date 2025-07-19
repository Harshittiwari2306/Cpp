#include <iostream>
#include <algorithm>

using namespace std;

string twoArrays(int k, int* A, int* B, int n) {
    // Sort A in ascending order
    sort(A, A + n);
    // Sort B in descending order
    sort(B, B + n, greater<int>());
    
    // Check if for all i, A[i] + B[i] >= k
    for (int i = 0; i < n; i++) {
        if (A[i] + B[i] < k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int n, k;
        cin >> n >> k;
        
        // Dynamically allocate arrays
        int* A = new int[n];
        int* B = new int[n];
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> B[i];
        }
        
        cout << twoArrays(k, A, B, n) << endl;
        
        // Free allocated memory
        delete[] A;
        delete[] B;
    }
    
    return 0;
}
