#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int max_freq = *max_element(freq.begin(), freq.end());
    cout << n - max_freq << "\n";
        
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}