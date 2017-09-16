#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<int, int> freq;
    vector<int> ints;
    while (cin >> n) {
        if (freq.find(n) == freq.end()) {
            freq[n] = 1;
            ints.push_back(n);
        } else {
            freq[n]++;
        }
    }

    for (auto i : ints) {
        cout << i << " " << freq.find(i)->second << '\n';
    }

    return 0;
}

