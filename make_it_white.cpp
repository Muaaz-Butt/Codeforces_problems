#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first_b = -1;
    bool flag = true;
    int last_b = -1;
    for(int i = 0; i < n; i++){
        if (s[i] == 'B' && flag) {
            first_b = i;
            last_b = i;
            flag = false;
        } else if (s[i] == 'B'){
            last_b = i;
        }
    }
    cout << last_b - first_b + 1 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}