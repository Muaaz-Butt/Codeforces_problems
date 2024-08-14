// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_frequency(vector<int>& freq, string a) {
    for (char c : a){
        freq[c - 'A']++;
    }
}

int count_missing_problems(vector<int>& freq, int m){
    int missing_problems = 0;

    for(int i = 0; i < 7; i++) {
        if(freq[i] < m) {
            missing_problems += m - freq[i];
        }
    }
    return missing_problems;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        vector<int> freq(7, 0);
        count_frequency(freq, a);
        int missing_problems = count_missing_problems(freq, m);
        cout << missing_problems << "\n";
    }
    
    return 0;
}