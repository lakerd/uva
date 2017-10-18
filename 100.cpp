#include <bits/stdc++.h>

using namespace std;

int cycleLen(int n) {
    int len = 0;
    while (true) {
        if (n == 1)
            break;
        ++len;
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3*n + 1;
        }
    }
    return len + 1;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int left = i;
        int right = j;
        if (j < i) {
            left = j;
            right = i;
        }
        int cycle = -1;
        for (int k = left; k <= right; ++k) {
            cycle = max(cycleLen(k), cycle);
        }
        cout << i << " " << j << " " << cycle << '\n';
    }
    return 0;
}
