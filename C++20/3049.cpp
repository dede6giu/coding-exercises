#include <iostream>
using namespace std;

int main() {
    int B, T, areaL = 0;
    const int areaT = 160*70;

    cin >> B;
    cin >> T;

    areaL = (B+T)*70/2;

    if (areaL == areaT / 2) {
        cout << 0 << "\n";
    } else if (areaL > areaT / 2) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }

    return 0;
}