#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int r1, x1, y1, r2, x2, y2 = 0;
    double d;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        if (r1 <= r2) {
            cout << "MORTO" << "\n";
        } else {
            d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            if (d > (r1 - r2)) {
                cout << "MORTO" << "\n";
            } else {
                cout << "RICO" << "\n";
            }
        }
    }

    return 0;
}