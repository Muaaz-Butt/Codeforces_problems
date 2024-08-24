#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if (n > 2){
        cout << "NO\n";
    } else {
        int diff = abs(arr[1] - arr[0]);
        if (diff != 1) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}