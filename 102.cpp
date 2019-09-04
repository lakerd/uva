#include <bits/stdc++.h>

using namespace std;

int bin1[3];
int bin2[3];
int bin3[3];

const int brown = 0;
const int green = 1;
const int clear = 2;

const int N = 3;
int arr[3];
int used[3];
int ans = INT_MAX;
string order = "";
char letters[3] = {'B', 'G', 'C'};

void permute(int i) {
    if (i >= N) {
        int tmp = 0;

        // 1st bin
        tmp += bin2[arr[0]];
        tmp += bin3[arr[0]];

        // 2nd bin
        tmp += bin1[arr[1]];
        tmp += bin3[arr[1]];

        // 3rd bin
        tmp += bin1[arr[2]];
        tmp += bin2[arr[2]];

        string o = "";
        o += letters[arr[0]];
        o += letters[arr[1]];
        o += letters[arr[2]];

        if (order == "") {
            ans = min(ans, tmp);
            order = o;
        } else {
            if (tmp < ans || (tmp == ans && o < order)) {
                ans = tmp;
                order = o;
            }
        }
    }

    for (int j = 0; j < N; ++j) {
        if (!used[j]) {
            used[j] = 1;
            arr[i] = j;
            permute(i + 1);
            used[j] = 0;
        }
    }
}

int main() {
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        for (int i = 0; i < 3; ++i) iss >> bin1[i];
        for (int i = 0; i < 3; ++i) iss >> bin2[i];
        for (int i = 0; i < 3; ++i) iss >> bin3[i];
        ans = INT_MAX;
        order = "";
        memset(arr, 0, sizeof(arr));
        memset(used, 0, sizeof(used));
        permute(0);
        cout << order << " " << ans << endl;
    }

    return 0;
}

