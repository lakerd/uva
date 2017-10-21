#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        int lowercase[26] = { 0 };
        int uppercase[26] = { 0 };
        int upper = 0;
        int lower = 0;
        for (char c : line) {
            if (c >= 'a' && c <= 'z') {
                lowercase[c - 'a']++;
                lower = max(lowercase[c - 'a'], lower);
            } else if (c >= 'A' && c <= 'Z') {
                uppercase[c - 'A']++;
                upper = max(uppercase[c - 'A'], upper);
            }
        }
        if (upper >= lower) {
            for (int i = 0; i < 26; ++i) {
                if (uppercase[i] == upper) {
                    cout << (char)(i + 'A');
                }
            }
            for (int i = 0; i < 26; ++i) {
                if (lowercase[i] == upper) {
                    cout << (char)(i + 'a');
                }
            }
            cout << " " << upper << endl;
        } else {
            for (int i = 0; i < 26; ++i) {
                if (lowercase[i] == lower) {
                    cout << (char)(i + 'a');
                }
            }
            cout << " " << lower << endl;
        }
    }
    return 0;
}

