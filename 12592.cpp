#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string dummy;
    cin >> n;
    getline(cin, dummy);
    map<string, string> slogans;
    while (n--) {
        string slogan1;
        getline(cin, slogan1);
        string slogan2;
        getline(cin, slogan2);
        slogans[slogan1] = slogan2;
    }

    int q;
    cin >> q;
    getline(cin, dummy);
    string line;
    while (q--) {
        getline(cin, line);
        cout << slogans[line] << '\n';
    }
    return 0;
}
