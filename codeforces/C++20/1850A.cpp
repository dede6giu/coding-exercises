#include <iostream>
using namespace std;

int main() {
    int n, a, b, c = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;

        if (a+b >= 10 or b+c >= 10 or c+a >= 10) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        n--;
    }
    return 0;
}