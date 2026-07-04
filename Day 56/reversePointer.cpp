#include <iostream>
#include <vector>
using namespace std;

void reverseArr(int *arr, int n) {
    int *left = arr;
    int *right = arr + n - 1;
    
    while (left < right){
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}