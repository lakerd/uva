#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int v[n] = { 0 };
        int prev, cur;
        cin >> prev;
        for (int i = 1; i < n; i++) {
            cin >> cur;
            int val = abs(cur - prev);
            if (val >= 1 && val < n) v[val] = 1;
            prev = cur;
        }


        int jolly = 1;
        for (int i = 1; i < n; i++)
            if (!v[i]) {
                jolly = 0;
                break;
            }

        if (jolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}

