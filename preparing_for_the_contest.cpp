#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = n - i;
        }
        reverse(a.end() - k - 1, a.end());
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}