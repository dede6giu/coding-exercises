#include <iostream>
using namespace std;

int main() {
    int m, n = 0;

    cin >> m >> n;

    if (n % 2 == 0) {
        cout << m * n / 2 << "\n";
    } else {
        cout << (m * (n-1) / 2) + (m / 2) << "\n";
    }
    
    return 0;
}