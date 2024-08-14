#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long n, a, b;
    while(t--){
        cin >> n >> a >> b;
        if (a >= b) {
            cout << a * n << "\n";
        }
        else{
            long long k = min(b - a + 1, n);
            cout << (b - k + 1) * n + k * (k - 1) / 2 << endl;
        }
    }
}