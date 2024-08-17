#include <iostream>
#include <cmath>
 
using namespace std;
 
bool is_square(long long x) {
    long long l = 1, r = 1e9;
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (mid * mid == x) {
            return true;
        }
        if (mid * mid > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return false;
}
 
void solve() {
    int n;
    cin >> n;
    long long s = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += x;
    }
 
    if (is_square(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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