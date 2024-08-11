#include <iostream>
#include <utility>
using namespace std;
 
pair<int, int> maxInArray(int arr[], int size) {
    int maxValue = arr[0];
    int maxIndex = 0;
    for(int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    return make_pair(maxValue, maxIndex);
}
int angryMonk(int arr[], int size){
    pair<int, int> max = maxInArray(arr, size);
    int result = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == max.first && i == max.second){
            continue;
        }
        if (arr[i] == 1){
            result += 1;
        } 
        else{
            result += ((arr[i] - 1) + arr[i]);
        }
    }
    return result;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++){
            cin >> arr[i];
        }
        int result = angryMonk(arr, k);
        cout << result << endl;
    }
    
    return 0;
}
