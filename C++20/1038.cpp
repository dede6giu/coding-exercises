#include <iostream>
using namespace std;
 
int main() {
    int code, amount;

    cin >> code >> amount;

    cout.precision(2);
    switch (code) {
        case 1:
            cout << fixed << "Total: R$ " << amount * 4.00 << "\n";
            break;
        case 2:
            cout << fixed << "Total: R$ " << amount * 4.50 << "\n";
            break;
        case 3:
            cout << fixed << "Total: R$ " << amount * 5.00 << "\n";
            break;
        case 4:
            cout << fixed << "Total: R$ " << amount * 2.00 << "\n";
            break;
        case 5:
            cout << fixed << "Total: R$ " << amount * 1.50 << "\n";
            break;
    }

    return 0;
}