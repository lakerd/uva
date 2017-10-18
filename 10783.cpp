#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int a,b;
    int ncase = 0;
    while (t--) {
        cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; ++i) {
            if (!(i % 2 == 0)) {
                sum += i;
            }
        }
        cout << "Case " <<  ++ncase << ": " << sum << '\n';
    }
    return 0;
}
