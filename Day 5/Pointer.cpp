#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int tmp = *a;
    *a = *a + *b;
    *b = abs(tmp - *b);
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int maxValue(int *arr, int n) {
    int *p = arr;
    int max = *p;

    p++;

    while (p < arr + n){
        if (max < *p) {
            max = *p;
        }
        p++;
    }

    return max;
}

int sum(int *arr, int n) {
    int sum = 0;
    int *p = arr;
    sum += *p;

    while (p < arr + n) {
        sum += *p;
        p++;
    }
    
    return sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    int arr[] = {3, 7, 2, 9, 5};

    // scanf("%d %d", &a, &b);
    // swap(pa, pb);
    // printf("%d\n%d", a, b);

    cout << sum(arr, 5);
    return 0;
}