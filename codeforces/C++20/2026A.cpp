#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, x, y, k;
    cin >> t;

    while (t--) {
        cin >> x >> y >> k;

        if (x >= k && y >= k) {
            cout << "0 0 0 " << y << " 0 " << y << " " << x << " " << y << "\n";
            continue;
        }
        if (x == y) {
            cout << "0 0 " << x << " " << y << " 0 " << y << " " << x << " 0" << "\n";
            continue;
        }
        if (x < y && x >= k / sqrt(2)) {
            cout << "0 0 " << x << " " << x << " 0 " << x << " " << x << " 0" << "\n";
            continue;
        }
        if (y < x && y >= k / sqrt(2)) {
            cout << "0 0 " << y << " " << y << " 0 " << y << " " << y << " 0" << "\n";
            continue;
        }

        pair<long long, long long> A, B, C, D;
        bool found = false;

        if (x >= y) {
            A.first = 0; A.second = 0;
            B.first = 0; B.second = y;

            while (B.first < x && !found) {
                B.first++;
                double mi = -((double) (A.first - B.first)) / ((double) (A.second - B.second));
                C.first = -1; C.second = y;
                while (C.first < B.first && !found) {
                    C.first++;
                    D.first = x; D.second = y;
                    while (D.second > 0 && !found) {
                        D.second--;
                        double newmi = ((double) (C.second - D.second)) / ((double) (C.first - D.first));
                        if (mi == newmi) {
                            if (pow(C.first - D.first, 2) + pow(C.second - D.second, 2) >= k*k) {
                                cout << A.first << " " << A.second << " " << B.first << " " << B.second << " ";
                                cout << C.first << " " << C.second << " " << D.first << " " << D.second << "\n";
                                found = true;
                            }
                        }
                    }
                }
            }
        } else {
            A.first = 0; A.second = 0;
            B.first = x; B.second = 0;

            while (B.second < y && !found) {
                B.second++;
                double mi = -((double) (A.first - B.first)) / ((double) (A.second - B.second));
                C.first = x; C.second = -1;
                while (C.second < B.second && !found) {
                    C.second++;
                    D.first = x; D.second = y;
                    while (D.first > 0 && !found) {
                        D.first--;
                        double newmi = ((double) (C.second - D.second)) / ((double) (C.first - D.first));
                        if (mi == newmi) {
                            if (pow(C.first - D.first, 2) + pow(C.second - D.second, 2) >= k*k) {
                                cout << A.first << " " << A.second << " " << B.first << " " << B.second << " ";
                                cout << C.first << " " << C.second << " " << D.first << " " << D.second << "\n";
                                found = true;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}