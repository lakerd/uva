#include <bits/stdc++.h>

using namespace std;

int main() {
    int coins[] = { 1, 5, 10, 25, 50 };
    const int m = 30001;
    unsigned long long dp[m] = { 0 };
    dp[0] = 1;

    for (auto coin : coins) {
        for (int j = coin; j < m; ++j) {
            dp[j] += dp[j - coin];
        }
    }

    int cents;
    while (cin >> cents) {
        if (dp[cents] == 1) {
            cout << "There is only 1 way to produce " << cents << " cents change.\n";
        } else {
            cout << "There are " << dp[cents] << " ways to produce " << cents << " cents change.\n";
        }
    }

    return 0;
}
