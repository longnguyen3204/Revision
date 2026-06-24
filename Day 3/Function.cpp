#include <iostream>
using namespace std;

// Truyen tham so
void swapValue(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;

    cout << "Trong swapValue: "
        << "a = " << a
        << ", b = " << b << endl;
}

// Truyen tham tri
void swapReference(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;

    cout << "Trong swapValue: "
        << "a = " << a
        << ", b = " << b << endl;
}

int main() {
    int a, b;

    cout << "Nhap a va b: ";
    cin >> a >> b;

    cout << "\nBan dau:"
        << "a = " << a
        << ", b = " << b << endl;

    swapValue(a, b);

    cout << "Sau swapValue: ";
    cout << "a = " << a << ", b = " << b << endl;

    swapReference(a, b);

    cout << "Sau swapReference: ";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}