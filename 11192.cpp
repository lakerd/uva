#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 0; i < 101; ++i) {
        int groups;
        cin >> groups;
        if (groups == 0) {
            break;
        }
        string word;
        cin >> word;
        int j = 0;
        int len = word.size();
        int groupsize = (len % groups == 0) ? len / groups : (len / groups) + 1;
        while (j < len) {
            reverse(word.begin() + j, word.begin() + j + groupsize);
            j += groupsize;
        }
        cout << word << endl;
    }
    return 0;
}
