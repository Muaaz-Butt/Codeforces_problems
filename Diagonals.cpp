#include <iostream>
using namespace std;
 
int findMinimumDiagonal(int n, int chips){
    int count = 1;
    int minimumDiagonal = 0;
    while (chips > 0) {
        chips -= n;
        minimumDiagonal++;
        count++;
        if (count == 2){
            n--;
            count = 0;
        }
    }
    return minimumDiagonal;
}
 
int main() {
    int noOfInputs;
    cin >> noOfInputs;
    int array[noOfInputs];
    int n;
    int chips;
    for (int i = 0; i < noOfInputs; i++){
        cin >> n >> chips;
        array[i] = findMinimumDiagonal(n, chips);
    }
    for (int i = 0; i < noOfInputs; i++) {
        cout << array[i] << endl;
    }
    return 0;
}
