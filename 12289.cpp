#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    string word;
    while (t--) {
        cin >> word;
        if (word.size() == 5) {
            cout << 3 << endl;
        } else {
            if ((word[0] == 'o' && word[1] == 'n')
                || (word[0] == 'o' && word[2] == 'e')
                || (word[1] == 'n' && word[2] == 'e')
               ) cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
