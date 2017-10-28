#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 0;
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int arr[n];

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }

        int avg = sum / n;
        int diff = 0;
        for (auto x : arr) {
            diff += abs(x - avg);
        }

        cout << "Set #" << ++tc << '\n';
        cout << "The minimum number of moves is " << diff / 2 << "." << "\n\n";
    }

    return 0;
}
