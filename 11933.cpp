#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   while (cin >> n) {
      if (n == 0) {
         break;
      }
      int a = 0;
      int b = 0;
      for (int i = 0, j = 1; i < 32; ++i) {
         if ((n & (1 << i)) > 0) {
            if (j % 2 == 0) {
               b |= (1 << i);
            } else {
               a |= (1 << i);
            }
            ++j;
         }
      }
      cout << a << " " << b << endl;
   }

   return 0;
}
