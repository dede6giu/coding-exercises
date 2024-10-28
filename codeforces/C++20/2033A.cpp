#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        if ((n+1) % 2 == 1) {
            cout << "Sakurako" << "\n";
        } else {
            cout << "Kosuke" << "\n";
        }
    }

    return 0;
}