#include <iostream>
using namespace std;

int main() {
    int n, m = 1;

    cin >> n;

    while (m != n+1) {
        cout << m << " " << m*m << " " << m*m*m << "\n";
        cout << m << " " << m*m + 1 << " " << m*m*m + 1 << "\n";
        m++;
    }

    return 0;
}