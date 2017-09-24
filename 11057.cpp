#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> prices;
        prices.reserve(n);
        int price;
        for (int i = 0; i < n; ++i) {
            cin >> price;
            prices.push_back(price);
        }
        int money;
        cin >> money;

        sort(prices.begin(), prices.end());

        int hi = prices.size() - 1;
        int lo = 0;

        int p1, p2;

        while (lo < hi) {
            int cur = prices[lo] + prices[hi];
            if (cur < money) {
                ++lo;
            } else if (cur > money) {
                --hi;
            } else {
                p1 = lo;
                p2 = hi;
                ++lo;
                --hi;
            }
        }
        cout << "Peter should buy books whose prices are " << prices[p1] << " and " << prices[p2] << ".\n\n";
    }
    return 0;
}

