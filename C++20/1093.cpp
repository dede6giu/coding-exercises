#include <iostream>
using namespace std;

int main() {
    int EV1, EV2, D, m, n = 0;
    double tAP, cAP, tBP, AT, BT, I = 0;
    cout.precision(1);

    while (true) {
        // set important values
        cin >> EV1 >> EV2 >> AT >> D;
        AT /= 6;
        BT = 1 - AT;

        // breakout condition
        if (EV1 == 0 and EV2 == 0 and AT == 0 and D == 0) {
            break;
        }

        // calculate m and n
        m = 0;
        n = 0;
        while (EV1 - EV2 - 2*D*m > -(EV1 + EV2)) {
            m++;
        }
        while (EV1 - EV2 + 2*D*n < EV1 + EV2) {
            n++;
        }

        // calculate totalBPath
        if (m == 1) {
            tBP = 0;
        } else {
            tBP = AT;
            while (m - 2 > 0) {
                tBP *= BT;
                tBP = 1 - tBP;
                tBP = AT / tBP;
                m--;
            }
            tBP *= BT;
        }

        // calculate totalAPath and constantAPath
        cAP = AT;
        if (n == 1) {
            tAP = 0;
        } else {
            tAP = BT;
            while (n - 2 > 0) {
                cAP *= AT;
                tAP *= AT;
                tAP = 1 - tAP;
                cAP *= 1 / tAP;
                tAP = BT / tAP;
                n--;
            }
            cAP *= AT;
            tAP *= AT;
        }

        //calculate win chance (I)
        I = cAP / (1 - (tAP + tBP));

        cout << fixed << I * 100 << "\n";
    }

    return 0;
}