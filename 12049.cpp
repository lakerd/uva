#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        int m;
        cin >> n >> m;

        int a[n];
        int b[m];

        unordered_map<int, int> s1;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            s1[a[i]]++;
        }

        unordered_map<int, int> s2;
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
            s2[b[i]]++;
        }


        int ans = 0;


        for (const auto& entry : s2) {
            auto it = s1.find(entry.first);
            if (it == s1.end()) {
                ans += entry.second;
            } else {
                if (entry.second > it->second) {
                    ans += entry.second - it->second;
                }
            }
        }

        for (const auto& entry : s1) {
            auto it = s2.find(entry.first);
            if (it == s2.end()) {
                ans += entry.second;
            } else {
                if (entry.second > it->second) {
                    ans += entry.second - it->second;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

