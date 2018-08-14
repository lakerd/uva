#include <bits/stdc++.h>

using namespace std;

constexpr int N = 10001;
int visited[N];

int solve(int a[], int n) {
    memset(visited, 0, N);
    for (int i = 0; i < n; ++i) {
        visited[a[i]] = i;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = a[j] - a[i];
            int target = diff + a[j];
            if (target >= 0 && target < n && visited[target] > j) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    char dummy;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        cin >> dummy;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (solve(a, n) == 1) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
    return 0;
}
