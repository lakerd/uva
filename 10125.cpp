#include <bits/stdc++.h>

using namespace std;

int solve(int a[], int n) {
   for (int i = n - 1; i >= 0; --i) {
      for (int j = 0; j < n; ++j) {
         if (i != j) {
            for (int k = j + 1; k < n; ++k) {
               if (i != k) {
                  for (int d = k + 1; d < n; ++d) {
                     if (i != d) {
                        if (a[i] == a[j] + a[k] + a[d]) {
                           return a[i];
                        }
                     }
                  }
               }
            }
         }
      }
   }
   return -1;
}

int main() {
   int n;
   while (true) {
      cin >> n;
      if (n == 0) {
         break;
      }
      int a[n];
      for (int i = 0; i < n; ++i) {
         cin >> a[i];
      }

      sort(a, a + n);
      int ans = solve(a, n);

      if (ans == -1) {
         cout << "no solution\n";
      } else {
         cout << ans << "\n";
      }
   }
   return 0;
}
