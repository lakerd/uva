#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int tc = 1;
    while (1) {
        cin >> s;
        if (s == "#")
            break;
        string c;
        if (s == "HELLO") {
            c = "ENGLISH";
        } else if (s == "HOLA") {
            c = "SPANISH";
        } else if (s == "HALLO") {
            c = "GERMAN";
        } else if (s == "BONJOUR") {
            c = "FRENCH";
        } else if (s == "CIAO") {
            c = "ITALIAN";
        } else if (s == "ZDRAVSTVUJTE") {
            c = "RUSSIAN";
        } else {
            c = "UNKNOWN";
        }
        cout << "Case " << tc++ << ": " << c << '\n';
    }
    return 0;
}

