#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long n;
    while (cin >> n) {
        if (n == 0)
            break;
        unsigned long long sum = 0;
        while (true) {
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum < 10)
                break;
            n = sum;
            sum = 0;
        }
        cout << sum << endl;
    }
    return 0;
}

