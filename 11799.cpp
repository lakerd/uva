#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    string line;
    int ncase = 0;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v;
        v.reserve(n);

        for (int i = 0; i < n; ++i) {
            int c;
            cin >> c;
            v.push_back(c);
        }

        int max_speed = INT_MIN;
        for (auto i : v) {
            max_speed = max(i, max_speed);
        }

        cout << "Case " << ++ncase << ": " << max_speed << '\n';
    }
    return 0;
}
