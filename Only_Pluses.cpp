#include <iostream>
#include <algorithm>
using namespace std;

int onlyPluses(int a, int b, int c){
    for (int i = 0; i < 5; i++){
        if (a < b && a < c){
            a++;
        }
        else if (b < c){
            b++;
        }
        else {
            c++;
        }
    }
    return a * b * c;
}

void sortNumbers(int &a, int &b , int &c){
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        sortNumbers(a, b, c);
        int result = onlyPluses(a, b, c);
        cout << result << endl;
    }
    return 0;
}
