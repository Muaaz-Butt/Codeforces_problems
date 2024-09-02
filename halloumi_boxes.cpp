#include <bits/stdc++.h>
 
using namespace std;
 
bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if (isSorted(arr) || k > 1){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}