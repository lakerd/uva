#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 1;
    string spc = "";
    while (1) {
        int n;
        cin >> n;
        if (n == -1)
            break;

        vector<int> missiles;
        missiles.push_back(n);
        while (cin >> n && n != -1) {
            missiles.push_back(n);
        }

        int dp[missiles.size()] = { 0 };

        dp[0] = 1;
        for (size_t i = 1; i < missiles.size(); i++) {
            for (size_t j = 0; j < missiles.size(); j++) {
                if (missiles[j] > missiles[i] && dp[j] > dp[i]) {
                    dp[i] = dp[j];
                }
            }

            dp[i]++;
        }

        int ans = dp[0];
        for (auto i : dp) { ans = max(ans, i); }

        cout << spc << "Test #" << tc << ":" << '\n';
        cout << "  maximum possible interceptions: " << ans << '\n';
        spc = "\n";
        tc++;
    }
}

