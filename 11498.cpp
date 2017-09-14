#include <bits/stdc++.h>

using namespace std;

int main() {
    while (1) {
        int queries;

        cin >> queries;
        if (queries == 0)
            break;

        int n, m, x, y;
        cin >> n >> m;

        while (queries--) {
            cin >> x >> y;

            if (x == n || m == y) {
                cout << "divisa" << '\n';
            } else if (x <= n && y >= m) {
                cout << "NO" << '\n';
            } else if (x >= n && y >= m) {
                cout << "NE" << '\n';
            } else if (x >= n && y <= m) {
                cout << "SE" << '\n';
            } else if (x <= n && y <= m) {
                cout << "SO" << '\n';
            }
        }
    }

    return 0;
}

