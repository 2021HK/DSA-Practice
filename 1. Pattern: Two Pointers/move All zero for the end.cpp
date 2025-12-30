 // First find where zero starts
 // Then one by one bring non-zero values forward
 // Zeroes naturally slide to the back

#include <iostream>
using namespace std;

int* moveZeroes(int arr[], int n) {
    // 1️⃣ Find first zero
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;   // mark position of first zero
            break;
        }
    }

    // If no zero found → nothing to do
    if(j == -1) return arr;

    // 2️⃣ Now move all non-zero to the front by swapping
    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;    // move zero position forward
        }
    }

    return arr;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int* result = moveZeroes(arr, n);

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    return 0;
}
