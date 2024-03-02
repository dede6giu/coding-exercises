#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int r, v, n = 1;

    cin >> n;

    while (n != 0) {
        cin >> r >> v;

        if (r == 1 or v == 1) {
            cout << 1 << "\n";
            n--;
            continue;
        } else if (r % v == 0) {
            cout << v << "\n";
            n--;
            continue;
        } else if (v % r == 0) {
            cout << r << "\n";
            n--;
            continue;
        } else if (r == v) {
            cout << r << "\n";
            n--;
            continue;
        }

        while (r != v) {
            if (r > v) {
                r -= v;
            } else {
                v -= r;
            }
        }


        cout << r << "\n";
        n--;
    }
    return 0;
}