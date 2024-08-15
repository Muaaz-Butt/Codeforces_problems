#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {    
        int n, m;
        cin >> n >> m;
        int k = 0;
        string a, b;
        cin >> a;
        cin >> b;
        int i = 0;
        int j = 0;
        while(i < n && j < m) {
            if (a[i] == b[j]){
                i++; j++; k++;
            } else {
                j++;
            }
        }
        cout << k << "\n";
        k = 0;
    }
    
    return 0;
}