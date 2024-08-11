#include <iostream>
 
using namespace std;
 
void catchTheCoin(int x, int y) {
    if (y < -1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}
 
int main(){
    int n;
    cin >> n;
    while(n--) {
        int x, y;
        cin >> x >> y;   
        catchTheCoin(x, y);
    }
}