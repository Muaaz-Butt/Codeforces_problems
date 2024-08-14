#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void input_from_user(vector<pair<int, int>>& scores) {
    for(int i = 0; i < 2; i++){
        cin >> scores[i].first >> scores[i].second;
    }
}

void soccer(vector<pair<int, int>>& scores) {
    if (scores[0].first > scores[0].second && scores[1].first > scores[1].second) {
        cout << "YES" << endl;
    } else if (scores[0].first < scores[0].second && scores[1].first < scores[1].second) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        vector<pair<int, int>> scores(2);
        input_from_user(scores);
        soccer(scores);
    }
}