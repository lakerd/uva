#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        bool possible = true;
        int col1, col2;
        cin >> col1 >> col2;
        int dist = col1 - col2;
        for (int i = 0; i < n - 1; ++i) {
            cin >> col1 >> col2;
            if (dist != col1 - col2) {
                possible = false;
            }
        }
        if (possible)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';

        if (tc)
            cout << '\n';
    }
    return 0;
}

