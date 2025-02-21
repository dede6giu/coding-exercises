#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ull x, xx, aux;
        cin >> x;
        if (x == 1) {
            cout << 3 << "\n";
            continue;
        }
        xx = x;
        aux = ceil(log2(x)) + 2;
        string r = "";
        while (aux--) {
            if (xx >= pow(2, aux)) {
                r += "1";
                xx -= pow(2, aux);
            } else {
                r += "0";
            }
        }
        reverse(r.begin(), r.end());
        bool one = false;
        ull o;
        for (ull i = 0; i < r.size(); i++) {
            if (one) break;
            if (!one && r[i] == '1') {
                o = i;
                one = true;
            }
        }
        aux = pow(2, o);
        if (aux == x) {
            cout << x + 1;
        } else {
            cout << aux;
        }
        cout << "\n";
    }

    return 0;
}