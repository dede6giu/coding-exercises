#include <iostream>
using namespace std;

int main() {
    int n, d = 1;

    cin >> n;

    while (d <= (n + 1) / 2) {
        if (n % d == 0) {
            cout << d << "\n";
        }
        d++;
    }

    cout << n << "\n";

    return 0;
}