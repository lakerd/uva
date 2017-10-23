#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int farmers;
        cin >> farmers;
        long long asize, animals, friendliness;
        long long total = 0;
        for (int i = 0; i < farmers; ++i) {
            cin >> asize;
            cin >> animals;
            cin >> friendliness;
            total += asize * friendliness;
        }
        cout << total << '\n';
    }
    return 0;
}

