#include <iostream>
 
using namespace std;
 
int maxInArray(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
 
int minInArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
 
int x_axis(int max, int min) {
    return max - min;
}
 
void takeInputFromUserInArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
 
int main() {
    int t;
    cin >> t;
    int size = 3;
    int arr[size];
    while(t--) {
        takeInputFromUserInArray(arr, size);
        int max = maxInArray(arr, size);
        int min = minInArray(arr, size);
        int result = x_axis(max, min);
        cout << result << endl;
    }
}
