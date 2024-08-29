#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0, b= 0;
        for (char c : s)
            (c == 'A' ? a++ : b++);
        cout << (a > b ? 'A' : 'B') << '\n';

    }
    return 0;
}