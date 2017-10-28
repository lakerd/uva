#include <bits/stdc++.h>
using namespace std;

int main() {
    const char keys[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string line;
    getline(cin, line);
    for (char c : line) {
        if (c == ' ' || c == '\n') {
            cout << c;
        } else {
            c = tolower(c);
            int i = 0;
            while (keys[i] != c) i++;
            cout << keys[i - 2];
        }
    }
    cout << '\n';

    return 0;
}
