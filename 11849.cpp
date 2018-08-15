#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    long long m;
    while (cin >> n >> m) {
        unordered_set<long long> s;
        if (n == 0 && m == 0) {
            break;
        }
        while (n--) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long ans = 0;
        while (m--) {
            long long x;
            cin >> x;
            if (s.find(x) != s.end()) {
                ++ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
