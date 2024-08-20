#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    bool ok = false;
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[0]) {
            swap(s[0], s[i]);
            ok = true;
            break;
        }
    }
    
    if (!ok) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    cout << s << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    
    return 0;
}
