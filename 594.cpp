#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   while (cin >> n) {
      int rev = 0;
      rev = (n & 0xff) << 24
         | ((n >> 8) & 0xff) << 16
         | ((n >> 16) & 0xff) << 8
         | ((n >> 24) & 0xff);

      cout << n << " converts to " << rev << endl;
   }

   return 0;
}
