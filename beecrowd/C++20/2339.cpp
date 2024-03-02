#include <iostream>
using namespace std;

int main() {
    int c, p, f = 0;

    cin >> c >> p >> f;

    if (c*f <= p) {
        cout << "S" << "\n";
    } else {
        cout << "N" << "\n";
    }

    return 0;
}