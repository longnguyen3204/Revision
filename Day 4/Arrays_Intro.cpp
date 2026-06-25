#include <iostream>
using namespace std;

void reverseArr(int *arr, int n) {
    int tmp = 0;

    for (int i = 0; i < n/2; i++) {
        tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }  
}

int findMax(int *arr, int n) {
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    int n;
    
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nMax Value: " << findMax(arr, n) << endl;
    return 0;
}