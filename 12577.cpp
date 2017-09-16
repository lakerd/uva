#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int tc = 0;
    while (cin >> s) {
        ++tc;
        if (s == "*")
            break;
        if (s == "Hajj") {
            cout << "Case " << tc << ": " << "Hajj-e-Akbar" << '\n';
        } else {
            cout << "Case " << tc << ": " << "Hajj-e-Asghar" << '\n';
        }
    }
    return 0;
}

