#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> cache;

int solve(const string& s) {
   int len = s.size();
   if (len == 0) {
      return 1;
   }
   if (len == 1) {
      return 0;
   }

   if (cache.find(s) != cache.end()) {
      return cache[s];
   }

   bool same = true;
   for (int i = 1; i < len; ++i) {
      if (s[i] != s[i - 1]) {
         same = false;
         break;
      }
   }

   if (same) {
      return 1;
   }

   for (int i = 0; i < len; ++i) {
      int j = i + 1;
      while (j < len && s[j] == s[i]) ++j;
      if (j - i >= 2) {
         string x = s.substr(0, i) + s.substr(j);
         int ans = solve(x);
         cache[x] = ans;
         if (ans == 1) {
            return ans;
         }
      }
   }

   return 0;
}

int main() {
   int tc;
   cin >> tc;
   string s;
   while (tc--) {
      cin >> s;
      cout << solve(s) << "\n";
   }

   return 0;
}
