#include <bits/stdc++.h>

using namespace std;

char rotate(char orientation, char direction)
{
    if (direction == 'L') {
        if (orientation == 'E')
            return 'N';
        if (orientation == 'N')
            return 'W';
        if (orientation == 'W')
            return 'S';
        if (orientation == 'S')
            return 'E';
    }

    if (orientation == 'E')
        return 'S';
    if (orientation == 'N')
        return 'E';
    if (orientation == 'W')
        return 'N';
    if (orientation == 'S')
        return 'W';

    return 'Z';
}

int main() {
    int n;
    int m;
    cin >> n >> m;

    int x = 0;
    int y = 0;
    char orientation;

    bool visited[n + 1][m + 1] = {0};

    while (cin >> x >> y >> orientation) {
        string instructions;
        cin >> instructions;
        bool isLost = false;
        for (char instruction : instructions) {
            if (instruction == 'L') {
                orientation = rotate(orientation, instruction);
            } else if (instruction == 'R') {
                orientation = rotate(orientation, instruction);
            } else {
                if (orientation == 'E') {
                    x++;
                } else if (orientation == 'W') {
                    x--;
                } else if (orientation == 'N') {
                    y++;
                } else if (orientation == 'S') {
                    y--;
                }
            }

            if (x < 0 || y < 0 || x > n || y > m) {
                if (orientation == 'E') {
                    x--;
                } else if (orientation == 'W') {
                    x++;
                } else if (orientation == 'N') {
                    y--;
                } else if (orientation == 'S') {
                    y++;
                }

                if (!visited[x][y]) {
                    isLost = true;
                    visited[x][y] = true;
                    break;
                }
            }
        }

        if (isLost) {
            cout << x << " " << y << " " << orientation << " LOST" << endl;
        } else {
            cout << x << " " << y << " " << orientation << endl;
        }
    }
    return 0;
}
