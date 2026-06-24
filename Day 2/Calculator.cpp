#include <iostream>
using namespace std;

int main() {
    int choice, a, b;

    cout << "Moi nhap 2 so: ";
    cin >> a >> b;
    
    
    while(true) {
        cout << "===== MENU =====" << endl;
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "5. Thoat" << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                cout << a + b << endl;
                break;
            case 2:
                cout << a - b << endl;
                break;
            case 3:
                cout << a * b << endl;
                break;
            case 4:
                cout << a / b << endl;
                break;
            case 5:
                cout << "Tam biet!" << endl;
                return 0;
        }
    }
}