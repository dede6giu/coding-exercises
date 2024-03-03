#include <iostream>
using namespace std;

int main() {
    int n, a, b, c = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;

        if (a+b == c or b+c == a or c+a == b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        n--;
    }
    return 0;
}