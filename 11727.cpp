#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int s1, s2, s3;
    int ncase = 1;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2 >> s3;
        vector<int> v{ s1, s2, s3 };
        sort(v.begin(), v.end());
        cout << "Case " << ncase++ << ": " << v[1] << '\n';
    }
    return 0;
}

