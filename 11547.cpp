#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int answer = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        if (answer < 0)
            answer *= -1;
        int tens = (answer / 10) % 10;
        cout << tens << '\n';
    }
    return 0;
}

