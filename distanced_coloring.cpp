#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m ,k;
    cin >> n >> m >> k;
    cout << min(n, k) * min(m , k) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}