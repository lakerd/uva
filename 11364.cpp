#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    int n, x;
    while (tc--) {
        cin >> n;
        int min = INT_MAX;
        int max = -1;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < min) min = x;
            if (x > max) max = x;
        }

        cout << 2 * (max - min) << endl;
    }

    return 0;
}
