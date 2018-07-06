#include <bits/stdc++.h>

using namespace std;

int main() {
   int tc;
   cin >> tc;
   while (tc--) {
      int n;
      cin >> n;

      int relatives[n] = {0};

      for (int i = 0; i < n; ++i) {
         cin >> relatives[i];
      }

      int sum = INT_MAX;

      for (int i = 0; i < n; ++i) {
         int cur = 0;
         for (int j = 0; j < n; ++j) {
            cur += abs(relatives[i] - relatives[j]);
         }
         sum = min(sum, cur);
      }
      cout << sum << endl;
   }
   return 0;
}
