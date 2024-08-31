#include <bits/stdc++.h>

using namespace std;

void input_array(vector<char>& arr, int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void solve(){
    int n;
    cin >> n;
    vector<char> arr(n);
    input_array(arr, n);
    int count = 0;
    for(int i = 0; i < n; i++){
        if (arr[i + 1] == '@'){
            count++;
        }
        if (arr[i + 1] == '*' && arr[i + 2] == '*'){
            break;
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}