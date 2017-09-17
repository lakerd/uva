#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    std::string digits;
    while (n--) {
        cin >> digits;
        if (digits == "1" || digits == "4" || digits == "78") {
            cout << "+" << '\n';
        } else if (digits.size() >= 3) {
            if (digits[digits.size() - 2] == '3' && digits[digits.size() - 1] == '5') {
                cout << "-" << '\n';
            } else if (digits[0] == '9' && digits[digits.size() - 1] == '4') {
                cout << "*" << '\n';
            } else if (digits[0] == '1' && digits[1] == '9' && digits[2] == '0') {
                cout << "?" << '\n';
            }
        }
    }
    return 0;
}
