#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int l, w, h;
    int tc = 0;
    while (t--) {
        ++tc;
        cin >> l >> w >> h;
        string s;
        if (l <= 20 && w <= 20 && h <= 20) {
            s = "good";
        } else {
            s = "bad";
        }
        cout << "Case " << tc << ": " << s << '\n';
    }
    return 0;
}
