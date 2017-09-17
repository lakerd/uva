#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> cents { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 50000, 100000 };
    double n;
    vector<long long> ways(30005);
    ways[0] = 1;

    for (auto cent : cents) {
        for (size_t j = cent; j < ways.size(); ++j) {
            ways[j] += ways[j - cent];
        }
    }

    while (cin >> n && n > 0.0000001) {
        size_t idx = n * 100 + 0.5;
        long long answer = ways[idx];
        printf("%6.2f%17I64d\n", n, answer);
    }
    return 0;
}
