#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    while (cin >> s >> t) {
        int slen = s.size();
        int tlen = t.size();

        if (slen == 0) {
            cout << "No" << endl;
            continue;
        }

        int j = 0;
        int i = 0;
        int len = 0;
        for (j = 0; j < tlen; ++j) {
            if (s[i] == t[j]) {
                ++len;
                ++i;
            }
        }

        if (len == slen)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

