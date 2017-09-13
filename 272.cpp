#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;

    bool first = true;

    while (getline(cin, line)) {
        for (size_t i = 0; i < line.size(); i++) {
            if (line[i] == '"') {
                line.erase(i, 1);
                string q = first ? "``" : "''";
                line.insert(i, q);
                first = !first;
            }
        }
        cout << line << endl;
    }
    return 0;
}
