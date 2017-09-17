#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, string> words;
    string line, word, foreignWord;
    while (getline(cin, line)) {
        if (line.empty())
            break;
        istringstream str(line);
        str >> word >> foreignWord;
        words[foreignWord] = word;
    }

    while (cin >> word) {
        auto it = words.find(word);
        if (it != words.end()) {
            cout << it->second << '\n';
        } else {
            cout << "eh" << '\n';
        }
    }
    return 0;
}

