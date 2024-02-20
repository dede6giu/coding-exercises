#include <iostream>
using namespace std;

int main() {
    int n, p, q = 0;
    double f = 0;

    cin >> n;

    while (n != 0) {
        cin >> p >> q;

        switch (p) {
            case 1001:
                f += q*1.50;
                break;
            case 1002:
                f += q*2.50;
                break;
            case 1003:
                f += q*3.50;
                break;
            case 1004:
                f += q*4.50;
                break;
            case 1005:
                f += q*5.50;
                break;
        }

        n--;
    }

    cout.precision(2);
    cout << fixed << f << "\n";

    return 0;
}