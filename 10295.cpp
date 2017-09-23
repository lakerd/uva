#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> m >> n;

    string word;
    int dollars;
    map<string, int> dollarsByWord;
    while (m--) {
        cin >> word >> dollars;
        dollarsByWord[word] = dollars;
    }

    while (n--) {
        int salary = 0;
        while (cin >> word) {
            if (word == ".") {
                break;
            }
            auto it = dollarsByWord.find(word);
            if (it != dollarsByWord.end()) {
                salary += it->second;
            }
        }

        printf("%d\n", salary);
    }
    return 0;
}

