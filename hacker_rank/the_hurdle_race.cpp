#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n = number of hurdles, k = max height Dan can jump naturally
    vector<int> height(n);
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    int max_hurdle = *max_element(height.begin(), height.end());
    int doses = max(0, max_hurdle - k);
    cout << doses << endl;
    return 0;
}
