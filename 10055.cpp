#include <bits/stdc++.h>

using namespace std;

int main() {
    long a, b;
    while (cin >> a >> b) {
        long ans = a > b ? a - b : b - a;
        cout << ans << '\n';
    }
    return 0;
}
