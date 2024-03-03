#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d, x = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c >> d;
        x = 0;

        if (a < b) {
            x++;
        }
        if (a < c) {
            x++;
        }
        if (a < d) {
            x++;
        }

        cout << x << "\n";

        n--;
    }

    return 0;
}