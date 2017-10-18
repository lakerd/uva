#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a;
        a.reserve(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int maxi = INT_MIN;
        int score = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > score) score = a[i];
            maxi = max(score - a[i + 1], maxi);
        }

        cout << maxi << '\n';
    }
    return 0;
}
