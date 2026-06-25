#include <iostream>
#include <string>
using namespace std;

void swapChar(string a, string b) {
    char tmp1, tmp2;
    tmp1 = a[0];
    tmp2 = b[0];
    b[0] = tmp1;
    a[0] = tmp2;

    cout << a << " " << b << endl;
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << endl;
    string c = a + b;
    cout << c << endl;

    swapChar(a, b);

    return 0;
}