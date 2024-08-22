#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n >= 102 && n <= 109) {
        cout << "YES\n";
    } else if (n >= 1010 && n <= 1099) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
   int t;
   cin >> t;
   while (t--) {
       solve();
   }
   return 0;
}

