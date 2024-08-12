#include <iostream>
# include <string>
 
using namespace std;
 
void creatingWords(string a, string b) {
    if (a[0] == b[0]){
            cout << a << " " << b << endl;
        } else{
            char temp = a[0];
            a[0] = b[0];
            b[0] = temp;
            cout << a << " " << b << endl;
        }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        creatingWords(a, b);
    }
}