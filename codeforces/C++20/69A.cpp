#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, x=0, y=0, z=0;
    int aux;
    cin >> n;

    while (n--) {
        cin >> aux;
        x += aux;
        cin >> aux;
        y += aux;
        cin >> aux;
        z += aux;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}