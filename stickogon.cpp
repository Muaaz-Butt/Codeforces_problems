#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(101, 0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[x]++;
        }
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i] / 3;
        }
        cout << sum << endl;
        
    }
}