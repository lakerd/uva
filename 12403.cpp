#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    string s;
    int total = 0;
    cin >> tc;
    while (tc--) {
        cin >> s;
        if (s == "report") {
            cout << total << '\n';
        } else {
            int donation;
            cin >> donation;
            total += donation;
        }
    }
    return 0;
}

