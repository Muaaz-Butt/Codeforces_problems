#include <bits/stdc++.h>

using namespace std;

void input_array(vector<int>& a, int n){
    for(int i = 0; i < n; i++){
        cin >>a[i];
    }
}

int sum_of_array(vector<int>& a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    input_array(a, n);
    if (n == 1){
        cout << "YES\n";
        return;
    }
    int num = sum_of_array(a, n) / n;
    for(int i = 0; i < n; i++){
        if (a[i] < num) {
            cout << "NO\n";
            return;
        }
        a[i + 1] += a[i] - num;
        a[i] = num;
    }
    cout << "YES\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}