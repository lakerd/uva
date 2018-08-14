#include <bits/stdc++.h>

using namespace std;

int solve(vector<int>& v, int target) {
    sort(v.begin(), v.end());
    int len = v.size();

    int minSum = INT_MAX;
    int diff = INT_MAX;

    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (v[i] != v[j]) {
                int s = v[i] + v[j];
                if (s > target) {
                    if (s - target < diff) {
                        diff = s - target;
                        minSum = s;
                    }
                } else {
                    if (target - s < diff) {
                        diff = target - s;
                        minSum = s;
                    }
                }
            }
        }
    }
    return minSum;
}

int main() {
    int n;
    int tc = 1;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<int> v(0, n);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int m;
        cin >> m;

        cout << "Case " << tc << ":" << endl;

        int q;
        for (int i = 0; i < m; ++i) {
            cin >> q;
            int ans = solve(v, q);
            cout << "Closest sum to " << q << " is " << ans << ".\n";
        }

        ++tc;
    }


    return 0;
}
