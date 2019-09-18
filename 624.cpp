#include <bits/stdc++.h>

using namespace std;

int answer;
vector<int> items;

void go(int minutes, int start, int usedMinutes, int ntracks, int tracks[], vector<int>& ans) {
    if (usedMinutes > minutes) {
        return;
    }

    if (usedMinutes > answer) {
        answer = usedMinutes;
        items = ans;
    }

    for (int i = start; i < ntracks; ++i) {
        ans.push_back(tracks[i]);
        go(minutes, i + 1, usedMinutes + tracks[i], ntracks, tracks, ans);
        ans.pop_back();
    }
}

int main() {
    int minutes;
    int ntracks;
    while (cin >> minutes) {
        cin >> ntracks;
        int tracks[ntracks];
        for (int i = 0; i < ntracks; ++i) {
            cin >> tracks[i];
        }

        vector<int> ans;
        answer = 0;
        items.clear();
        go(minutes, 0, 0, ntracks, tracks, ans);
		for (int item : items) {
            cout << item << " ";
        }
        cout << "sum:" << answer << '\n';
    }
    return 0;
}
