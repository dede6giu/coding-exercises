#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int r, v, hcd, n = 1;

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
        } else if (r > v) {
            hcd = v / 2;
        } else if (v > r) {
            hcd = r / 2;
        } else {
            cout << r << "\n";
            n--;
            continue;
        }

        if (r % 2 == 0 and v % 2 == 0) {
            while (r % hcd != 0 or v % hcd != 0) {
                if (hcd <= 1) {
                    break;
                }
                hcd--;
            }
        } else {
            if (hcd % 2 == 0) {
                hcd--;
            }
            while (r % hcd != 0 or v % hcd != 0) {
                if (hcd <= 1) {
                    break;
                }
                hcd -= 2;
            }
        }


        cout << hcd << "\n";
        n--;
    }
    return 0;
}