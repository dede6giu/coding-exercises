#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, x = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;

        x = abs(a - b) % (2*c) == 0 ? abs(a - b) / (2*c) : (abs(a - b) / (2*c)) + 1;

        cout << x << "\n";

        n--;
    }

    return 0;
}