#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    while (cin >> n >> s) {
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = INT_MAX;
        int curSum = 0;
        int left = 0;

        for (int i = 0; i < n; ++i) {
            curSum += a[i];
            while (curSum >= s) {
                ans = min(ans, i - left + 1);
                curSum -= a[left++];
            }
        }
        if (ans == INT_MAX) { ans = 0; }
        cout << ans << endl;
    }
    return 0;
}
