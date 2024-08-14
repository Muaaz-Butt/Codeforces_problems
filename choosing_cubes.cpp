#include <iostream>
#include <algorithm>

using namespace std;

void input_in_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void choosing_cubes(int arr[], int n, int k, int favourite_element){
    int count_fav = 0, count_removed = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == favourite_element){
            count_fav++;
        }
        if(i < k && arr[i] == favourite_element){
            count_removed++;
        }
    }

    if(count_removed == count_fav){
        cout << "YES" << "\n";
    } else if(count_removed == 0){
        cout << "NO" << "\n";
    } else {
        cout << "MAYBE" << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    int n, f, k;
    while(t--) {
        cin >> n >> f >> k;
        int a[n];
        input_in_array(a, n);
        int favourite_cube = a[f - 1];
        sort(a, a + n, greater<int>());
        choosing_cubes(a, n, k, favourite_cube);
    }
    return 0;
}
