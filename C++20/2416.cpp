#include <iostream>
using namespace std;

int main() {
    int c, n = 0;

    cin >> c >> n;

    c -= (c / n) * n;

    cout << c << "\n";

    return 0;
}