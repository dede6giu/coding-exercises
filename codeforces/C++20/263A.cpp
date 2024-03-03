#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, n, x = 0;

    n = 0;
    while (n < 5) {
        cin >> a >> b >> c >> d >> e;

        if (a == 1 or e == 1) {
            x += 2;
            n++;
            break;
        } else if (b == 1 or d == 1) {
            x += 1;
            n++;
            break;
        } else if (c == 1) {
            n++;
            break;
        } else {
            n++;
        }
    }

    switch (n) {
        case 5:
        case 1:
            x += 2;
            break;
        case 2:
        case 4:
            x += 1;
        case 3:
        default:
            break;
    }

    cout << x << "\n";
    
    return 0;
}