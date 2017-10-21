#include <bits/stdc++.h>

using namespace std;

long long rev(long long n) {
    string x = to_string(n);
    reverse(x.begin(), x.end());
    return stoi(x);
}

bool isPalindrome(long long n) {
    string s = to_string(n);
    int lo = 0;
    int hi = s.size() - 1;
    while (lo < hi) {
        if (s[lo] != s[hi])
            return false;
        lo++;
        hi--;
    }
    return true;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        int iter = 0;
        long long j;
        while (true) {
            iter++;
            j = rev(n);
            if (isPalindrome(n + j)) {
                cout << iter << " " << n + j << '\n';
                break;
            }
            n = n + j;
        }
    }
    return 0;
}

