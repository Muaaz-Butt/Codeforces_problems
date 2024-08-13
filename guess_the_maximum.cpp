#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int guessTheMaximum(int arr[], int size) {
    int result = INT_MAX;
    for (int i = 1; i < size; i++) {
        int maximum = max(arr[i], arr[i - 1]);
        if (maximum - 1 < result) {
            result = maximum - 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int result = guessTheMaximum(arr, n);
        cout << result << "\n";
    }
}