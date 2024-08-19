#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> hash_map;
        int result = 0;
        for (char c : s){
            if (c == '?'){
                continue;
            }
            if(hash_map.find(c) != hash_map.end()){
                hash_map[c]++;
            } else{
                hash_map[c] = 1;
            }
        }
        for (const auto& pair : hash_map) {
            result += min(pair.second, n);
        }
        cout << result << "\n"; 
    }
    
    return 0;
}