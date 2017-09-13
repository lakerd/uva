#include <bits/stdc++.h>

using namespace std;

int main() {
    while (!cin.eof()) {
        if (cin.eof()) break;
        int nums[200];
        int n;
        int i = 0;

        while ((cin >> n) && (n != -999999)) {
            nums[i++] = n;
        }

        long answer = LONG_MIN;
        for (int j = 0; j < i; j++) {
            long cur = nums[j];
            for (int k = j + 1; k < i; k++) {
                cur *= nums[k];
                if (cur > answer) answer = cur;
            }
        }

        cout << answer << '\n';
    }
    return 0;
}

