#include <bits/stdc++.h>

using namespace std;

struct car {
    int l;
    int h;
    string name;
};

int findCar(const vector<car>& cars, int price) {
    bool found = false;
    int idx = -1;

    for (int i = 0; i < (int) cars.size(); ++i) {
        if (price >= cars[i].l && price <= cars[i].h) {
            if (found) {
                return -1;
            } else {
                idx = i;
                found = true;
            }
        }
    }
    return idx;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int d;
        cin >> d;
        vector<car> cars;
        cars.reserve(d);
        for (int i = 0; i < d; ++i) {
            car c;
            cin >> c.name;
            cin >> c.l;
            cin >> c.h;
            cars.push_back(c);
        }
        int q;
        int price;
        cin >> q;
        while (q--) {
            cin >> price;
            int idx = findCar(cars, price);
            if (idx == -1) {
                cout << "UNDETERMINED\n";
            } else {
                cout << cars[idx].name << endl;
            }
        }
        if (tc) {
            cout << endl;
        }
    }
    return 0;
}
