#include <bits/stdc++.h>

using namespace std;

int main() {
    long long i, j;
    while (true) {
        cin >> i >> j;
        if (i == 0 && j == 0)
            break;
        int c = 0;
        int t = 0;
        while (i > 0 || j > 0) {
            c = ((i % 10) + (j % 10) + c) / 10;
            i /= 10;
            j /= 10;
            t += c;
        }

        if (t == 0)
            cout << "No carry operation." << '\n';
        else if (t == 1)
            cout << t << " carry operation." << '\n';
        else
            cout << t << " carry operations." << '\n';
    }
    return 0;
}

