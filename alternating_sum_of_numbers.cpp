#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = 0;
    bool flag = true;
    for(int i = 0; i < n; i++){
        if (flag){
            result += arr[i];
            flag = false;
        }
        else{
            result -= arr[i];
            flag = true;
        }
    }
    cout << result << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}
