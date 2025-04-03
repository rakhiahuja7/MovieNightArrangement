#include <bits/stdc++.h>
using namespace std;

int maxFriendsAccommodated(int n, int k, int d, vector<int>& s) {
    // Step 1: Sort the start times
    sort(s.begin(), s.end());

    int l = 0, count = 0, maxAccommodated = 0;

    // Step 2: Sliding window to find valid groups
    for (int r = 0; r < n; r++) {
        // Maintain window where s[r] - s[l] ≤ d
        while (s[r] - s[l] > d) {
            l++;  // Shrink window from the left
        }

        // Number of elements in the valid window
        int windowSize = r - l + 1;

        // If window exceeds `k`, we can only take `k` elements
        count = min(windowSize, k);

        // Accumulate maximum count possible
        maxAccommodated += count;

        // Move `l` forward once `k` friends are accommodated in a batch
        if (count == k) {
            l = r + 1;
        }
    }

    return maxAccommodated;
}

int main() {
    int n = 5, k = 3, d = 2;
    vector<int> s = {1, 2, 3, 10, 11};

    cout << maxFriendsAccommodated(n, k, d, s) << endl;  // Output: 4
    return 0;
}
