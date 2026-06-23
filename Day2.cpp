#include <iostream>

using namespace std;

int main() {
    // * Data Types
    // int n;
    // long l;
    // char c;
    // float f;
    // double d;

    // scanf("%d %ld %c %f %lf", &n, &l, &c, &f, &d);
    // printf("%d\n%ld\n%c\n%.3f\n%.9lf", n, l, c, f, d);

    // * For loop and If/Else
    int n, tmp;
    int chan = 0;
    int le = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;

        (tmp % 2 == 0) ? chan++ : le++;
    }

    cout << "chan: " << chan << endl;
    cout << "le: " << le << endl;

    return 0;
}