#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string result = "aaa";
    n -= 3;
    for(int i = 2; i >= 0; i--){
        if (n > 0){
            int add = min(25, n);
            result[i] += add;
             n -= add;
        }
    }
    cout << result  << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}