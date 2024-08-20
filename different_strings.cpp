#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        bool flag = true;
        for(int i = 1; i < len && flag; i++){
            if (s[i] != s[i - 1]){
                char temp = s[i];
                s[i] = s[i - 1];
                s[i - 1] = temp;
                cout << "YES\n" << s << "\n"; 
                flag = false;
            }
        }
        if (flag) {
            cout << "NO\n";
        }
    }
 
    return 0;
}