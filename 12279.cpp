#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int tc = 0;
    while (1) {
        ++tc;
        cin >> n;
        if (n == 0) {
            break;
        }
        int supposed = 0;
        int given = 0;
        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x > 0 && x <= 99) 
                supposed++;
            else
                given++;

        }

        int y = supposed - given;
        cout << "Case " << tc << ": " << y << '\n';

    }
    return 0;
}
