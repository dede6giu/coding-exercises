#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int aux = 0;
        aux += (int) s[0];
        aux += (int) s[1];
        aux += (int) s[2];
        aux -= (int) s[3];
        aux -= (int) s[4];
        aux -= (int) s[5];
        if (aux) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }

    return 0;
}