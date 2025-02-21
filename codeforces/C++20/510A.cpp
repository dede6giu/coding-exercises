#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m;
    bool right = true;
    cin >> n >> m;
    string f = "", sl = "", sr = "";

    f += "#";
    sl += "#";
    for (ll i = 1; i < m; i++) {
        sl += ".";
        sr += ".";
        f += "#";
    }
    sr += "#";

    while (n--) {
        if (n % 2) {
            if (right) {
                cout << sr;
            } else {
                cout << sl;
            }
            right = !right;
        } else {
            cout << f;
        }
        cout << "\n";
    }

    return 0;
}