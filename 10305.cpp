#include <bits/stdc++.h>

using namespace std;

const int MAX = 101;
vector<int> v;
vector<int> adj[MAX];
int visited[MAX];

void dfs(int start) {
    visited[start] = 1;
    for (auto x : adj[start]) {
        if (!visited[x]) {
            dfs(x);
        }
    }

    v.push_back(start);
}

int main() {
    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }


        for (int k = 0; k < m; ++k) {
            int i, j;
            cin >> i >> j;
            adj[i].push_back(j);
        }

        v.clear();
        memset(visited, 0, sizeof(visited));
        for (int k = 1; k <= n; ++k) {
            if (!visited[k])
                dfs(k);
        }

        for (int k = v.size() - 1; k >= 0; --k) {
            cout << v[k] << " ";
        }
        cout << '\n';
    }

    return 0;
}
