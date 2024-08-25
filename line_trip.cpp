#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int prev = 0, ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, arr[i] - prev);
        prev = arr[i];
    }

    ans = max(ans, 2 * (x - prev));
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
