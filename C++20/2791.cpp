#include <iostream>
using namespace std;

int main() {
    int c1, c2, c3 = 0;

    cin >> c1 >> c2 >> c3;

    if (c1 == 1) {
        cout << 1 << "\n";
    } else if (c2 == 1) {
        cout << 2 << "\n";
    } else if (c3 == 1) {
        cout << 3 << "\n";
    } else {
        cout << 4 << "\n";
    }

    return 0;
}