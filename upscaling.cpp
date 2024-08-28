#include <iostream>
#include <vector>
 
using namespace std;
 
void generate_checkerboard(int n) {
    vector<string> checkerboard;
 
    for (int i = 0; i < n; i++) {
        string row1 = "";
        string row2 = "";
 
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                row1 += "##";
                row2 += "##";
            } else {
                row1 += "..";
                row2 += "..";
            }
        }
 
        checkerboard.push_back(row1);
        checkerboard.push_back(row2);
    }
 
    for (const string &line : checkerboard) {
        cout << line << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        generate_checkerboard(n);
    }
 
    return 0;
}