#include <iostream>
#include <vector>
    
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> allNumbers;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                allNumbers.push_back(a[i][j]);
            }
        }
        
        if (n == 1 && m == 1){
            cout << "-1" << endl;
            continue;
        }
        vector<vector<int>> b(n, vector<int>(m));
        for (int i = 0; i < n * m; i++){
            b[i / m][i % m] = allNumbers[(i + 1) % (n * m)];
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
    
}