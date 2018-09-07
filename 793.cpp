#include <bits/stdc++.h>

using namespace std;


int union_find(int a[], int x) {
   while (x != a[x]) {
      x = a[x];
   }
   return x;
}

void unionf(int a[], int x, int y) {
   int rootX = union_find(a, x);
   int rootY = union_find(a, y);

   if (rootX != rootY) {
      a[rootX] = rootY;
   }
}

int main() {
   string line;
   getline(cin, line);
   int tc = stoi(line);
   string dummy;
   getline(cin, dummy);
   while (tc--) {
      getline(cin, line);
      int n = stoi(line);
      int a[n+1];
      for (int i = 1; i <= n; ++i) {
         a[i] = i;
      }
      char c;
      int x;
      int y;
      int t = 0;
      int f = 0;
      for (;;) {
         getline(cin, line);
         if (line.empty()) {
            break;
         }
         istringstream str(line);
         str >> c >> x >> y;
         if (c == 'c') {
            unionf(a, x, y);
         } else {
            if (union_find(a, x) == union_find(a, y)) {
               ++t;
            } else {
               ++f;
            }
         }
      }
      cout << t << "," << f << '\n';
      if (tc) {
         cout << '\n';
      }
   }

   return 0;
}
