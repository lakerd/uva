#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        for (char c : line) {
            cout << (char)(c - 7);
        }
        cout << endl;
    }
    return 0;
}
