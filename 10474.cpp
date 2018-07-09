#include <bits/stdc++.h>

using namespace std;

int lower_b(vector<int>& v, int item)
{
    int lo = 0;
    int hi = v.size() - 1;
    int ans = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] == item) {
            ans = mid;
            hi = mid - 1;
        } else if (item > v[mid]) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    int q;
    int tc = 1;

    while (cin >> n >> q) {
        if (n == 0 && q == 0) {
            break;
        }

        vector<int> v;
        v.reserve(n);
        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        cout << "CASE# " << tc << ":" << endl;
        int item;
        for (int i = 0; i < q; ++i) {
            cin >> item;
            int idx = lower_b(v, item);
            if (idx == -1) {
                cout << item << " not found" << endl;
            } else {
                cout << item << " found at " << (idx + 1) << endl;
            }
        }
        ++tc;
    }
    return 0;
}
