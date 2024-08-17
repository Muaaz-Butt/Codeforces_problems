#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int result = 0;
        while(n) {
            result += n % 10;
            n /= 10;
        }
        cout << result << "\n";
    }
    
    return 0;
}