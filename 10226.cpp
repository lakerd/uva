#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream str(line);
    int tc;
    str >> tc;
    getline(cin, line); // eat blank line
    while (tc--) {
        map<string, int> treeCounts;
        int total = 0;
        while (getline(cin, line)) {
            if (line.empty()) {
                break;
            }
            ++total;
            treeCounts[line]++;
        }
        for (const auto& it : treeCounts) { 
            cout << it.first << " " << fixed << setprecision(4) << it.second * 100.0 / total << '\n';
        }
        if (tc)
            cout << '\n';
    }
    return 0;
}
