#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> task(n);
    for (int i = 0; i < n; i++) {
        cin >> task[i].first >> task[i].second;
    }
    if (s <= task[0].first) {
        cout << "YES\n";
        return;
    } else {
        for (int i = 1; i < n; i++) {
            if (task[i].first - task[i - 1].second >= s) {
                cout << "YES\n";
                return;
            }
        }
        if (task[n - 1].second + s <= m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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