#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        vector<int> heads(n);
        vector<int> knights(m);

        for (int i = 0; i < n; ++i) {
            cin >> heads[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> knights[i];
        }

        if (m < n) {
            cout << "Loowater is doomed!" << endl;
            continue;
        }

        sort(heads.begin(), heads.end());
        sort(knights.begin(), knights.end());

        int head = 0;
        int knight = -1;
        int gold = 0;
        for (; head < n; ++head) {
            ++knight;

            while (knight < m && knights[knight] < heads[head])
                ++knight;

            if (knight == m)
                break;

            gold += knights[knight];
        }

        if (head != n) {
            cout << "Loowater is doomed!\n";
        } else {
            cout << gold << '\n';;
        }
    }

    return 0;
}

